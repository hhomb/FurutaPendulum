%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% acados parameters and closed-loop 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear all
init_acados

%% Settings
% OCP Settings
N            = 10; % steps
T            = 0.350; % time horizon length [s]
x0           = [0; pi; 0; 0]; % initial state [SI]
N_short      = 1; % number of short steps [-]
T_short      = 0.005; % length of short step [s]

% Integrator Settings
sim_method   = 'erk'; % erk, irk, irk_gnsf
stages_short = 4;
stages_long  = 4;
steps_short  = 1; 
steps_long   = 4; 

N_long       = N-N_short;
T_long       = (T-T_short*N_short)/N_long;

% Solver Settings
sim_method_jac_reuse = 0;
levenberg_marquardt = 20;
globalization =  'fixed_step';%'merit_backtracking';%
nlp_solver_max_iter = 5; 
nlp_solver =     'sqp_rti';%'sqp'; 
qp_solver = 'full_condensing_hpipm';% full_condensing_hpipm, partial_condensing_hpipm, full_condensing_qpoases, full_condensing_daqp
qp_solver_cond_N = 2;
nlp_solver_ext_qp_res = 0;

LEARN_NEW = 0; % flag to learn new warm-start trajectory
save_name = 'warm_start'; % name of json file
STABALIZE = 0; % flag to only stabilize

if LEARN_NEW % adapt solver setting to learn warm starting 
    globalization =  'merit_backtracking';
    nlp_solver_max_iter = 100;
    nlp_solver =     'sqp'; 
    levenberg_marquardt = 1; 
end

if STABALIZE % not using warmstart trajectory
    x_guess = x_guess.*0;
    u_guess = u_guess.*0;
end

% Tolerances
qp_solver_tol_stat = 1e-3;%
qp_solver_tol_eq   = 1e-3;%
qp_solver_tol_ineq = 1e-3;%
qp_solver_tol_comp = 1e-3;%


build_furuta_solver

%% Simulation Parameters
T_sim = 3.0; % simulation time [s]
n_exec = 10; % number of executions to get mean

if STABALIZE
    x_init = [0; pi/8; 0; 0];
else
    x_init = [0; pi; 0; 0];
end

% Visu Parameters
yxlabels = {'$\theta_1$ (rad)','$\theta_2$ (rad)'...
           ,'$\omega_1$ (rad/s)','$\omega_2$ (rad/s)'};
yulabels = {'$T$ (Nm)'};

% Calc Parameters
t_grid_ctrl=[0,cumsum(time_steps)];
t_grid_sim = 0:T_short:T_sim;
N_sim = length(t_grid_sim)-1;

% Alloc Memory
X_cl = zeros(nx,N_sim+1);
U_cl = zeros(nu,N_sim);
status = zeros(1,N_sim); 
time_tot = zeros(1,N_sim); 
time_sim = zeros(1,N_sim); 
time_qp = zeros(1,N_sim);
time_lin = zeros(1,N_sim);
time_qp_no_condensing = zeros(1,N_sim); 
X_cl(:,1) = x_init;

% Simulation
for i_exec=1:n_exec
  if ~LEARN_NEW
   ocp.set('x', x_guess);
   ocp.set('u', u_guess);
  end
                     
    for k=1:N_sim
        % set initial value    
        ocp.set('constr_x0', X_cl(:,k));
        ocp.solve();
        if LEARN_NEW
            ocp.store_iterate(save_name,1);
        end
    % get solution
        if i_exec == 1
            status(k) = ocp.get('status'); % 0 - success
            time_tot(k)=ocp.get('time_tot');
            time_lin(k)=ocp.get('time_lin');
            time_sim(k)=ocp.get('time_sim');
            time_qp(k)=ocp.get('time_qp_sol');
            time_qp_no_condensing(k)=ocp.get('time_qp_solver_call');
        else
            time_tot(k) = min(time_tot(k), ocp.get('time_tot'));
            time_lin(k) = min(time_lin(k), ocp.get('time_lin'));
            time_sim(k) = min(time_sim(k), ocp.get('time_sim'));
            time_qp(k) = min(time_qp(k), ocp.get('time_qp_sol'));
            time_qp_no_condensing(k) = min(time_qp_no_condensing(k), ocp.get('time_qp_solver_call'));
        end
        utraj = ocp.get('u');
        U_cl(:,k) = utraj(:,1);
    % Simulation
    % set initial state
        sim.set('x', X_cl(:,k));
        sim.set('u', U_cl(:,k));
    % solve
        sim_status = sim.solve();
        if sim_status ~= 0
            disp(['acados integrator returned error status ', num2str(sim_status)])
        end
    % get simulated state
        X_cl(:,k+1) = sim.get('xn');
    end
end
%% Visu closed-loop trajectories and timings
visu(X_cl,t_grid_sim,0,yxlabels,3,0)
visu([U_cl,U_cl(:,end)],t_grid_sim,0,yulabels,4,1)

time_tot = 1e6 * time_tot;
time_qp = 1e6 * time_qp;
time_qp_no_condensing = 1e6 * time_qp_no_condensing;
time_sim = 1e6 * time_sim;
time_lin = 1e6 * time_lin;
time_remaining = time_tot - time_qp - time_lin;

disp( 'Timings in micro s   Min        Mean        Max')
disp(['Total:              ' num2str(min(time_tot)) '     ' num2str(mean(time_tot)) '     ' num2str(max(time_tot)) ])
disp(['QP:                 ' num2str(min(time_qp)) '     ' num2str(mean(time_qp)) '     ' num2str(max(time_qp)) ])
disp(['QP no cond          ' num2str(min(time_qp_no_condensing)) '     ' num2str(mean(time_qp_no_condensing)) '     ' num2str(max(time_qp_no_condensing)) ])
disp(['sim:                ' num2str(min(time_sim)) '     '  num2str(mean(time_sim)) '     ' num2str(max(time_sim)) ])
time_lin_no_sim = time_lin - time_sim;
disp(['lin(without sim):   ' num2str(min(time_lin_no_sim)) '     '  num2str(mean(time_lin_no_sim)) '     ' num2str(max(time_lin_no_sim)) ])
disp(['remaining:          ' num2str(min(time_remaining)) '     '  num2str(mean(time_remaining)) '     ' num2str(max(time_remaining)) ])


%% make solver s-function
cd c_generated_code
make_sfun; % ocp solver
make_sfun_sim; % integrator
cd ..

function visu(xtraj,t_grid,t_rec,ylabels,num_fig,stairs_on)
% visu function
[nx,~] = size(xtraj);

figure(num_fig)
for x_dim = 1:nx
    subplot(nx,1,x_dim)
    if stairs_on==1
    stairs(t_rec+t_grid,xtraj(x_dim,:))
    else
    plot(t_rec+t_grid,xtraj(x_dim,:))
    end
    xlabel('t (s)','interpreter','latex')
    ylabel(ylabels{x_dim},'interpreter','latex')
    set(gca,'ticklabelinterpreter','latex')
end
drawnow
end