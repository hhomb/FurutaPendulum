

%% define SIMULINK inputs
simulink_opts = get_acados_simulink_opts;
simulink_opts.inputs.parameter_traj=0;
simulink_opts.inputs.y_ref_0=0;
simulink_opts.inputs.y_ref=0;
simulink_opts.inputs.y_ref_e=0;
simulink_opts.inputs.lbx=0;
simulink_opts.inputs.ubx=0;
simulink_opts.inputs.lbx_e=0;
simulink_opts.inputs.ubx_e=0;
simulink_opts.inputs.lg=0;
simulink_opts.inputs.ug=0;
simulink_opts.inputs.lh=0;
simulink_opts.inputs.uh=0;
simulink_opts.inputs.lh_e=0;
simulink_opts.inputs.uh_e=0;
simulink_opts.inputs.reset_solver=1;
simulink_opts.inputs.x_init=1;
simulink_opts.inputs.u_init=1;
simulink_opts.outputs.xtraj=1;
simulink_opts.outputs.utraj=1;
simulink_opts.inputs.rti_phase=1;

%% set path and check constraints
model_path = fullfile(pwd,'..','furuta_model');
addpath(model_path)
check_acados_requirements()

%% set integrator
time_steps=[ones(1,N_short).*T_short,ones(1,N_long).*T_long];
sim_method_num_stages = ones(N,1) * stages_short;
sim_method_num_stages(N_short+1:end) = stages_long;
sim_method_num_steps =  ones(N,1) * steps_short;
sim_method_num_steps(N_short+1:end) = steps_long;

%% model dynamics
model = furuta_model;
nx = model.nx;
nu = model.nu;


%% model to create the solver
ocp_model = acados_ocp_model();
model_name = 'furuta';

%% acados ocp model
ocp_model.set('name', model_name);
ocp_model.set('T', T);

% symbolics
ocp_model.set('sym_x', model.sym_x);
ocp_model.set('sym_u', model.sym_u);
ocp_model.set('sym_xdot', model.sym_xdot);

% cost
ocp_model.set('cost_expr_ext_cost', model.expr_ext_cost);
ocp_model.set('cost_expr_ext_cost_e', model.expr_ext_cost_e);
ocp_model.set('cost_expr_ext_cost_0', model.expr_ext_cost_0);
ocp_model.set('cost_type', 'auto')
ocp_model.set('cost_type_e', 'auto')
ocp_model.set('cost_type_0', 'auto')



% dynamics
if (strcmp(sim_method, 'erk'))
    ocp_model.set('dyn_type', 'explicit');
    ocp_model.set('dyn_expr_f', model.expr_f_expl);
else % irk irk_gnsf
    ocp_model.set('dyn_type', 'implicit');
    ocp_model.set('dyn_expr_f', model.expr_f_impl);
end

% constraints
ocp_model.set('constr_type', 'auto');
ocp_model.set('constr_expr_h', model.expr_h);
U_max = 0.45;
ocp_model.set('constr_lh', -U_max); % lower bound on h
ocp_model.set('constr_uh', U_max);  % upper bound on h

 X_max=5/6*pi;
 ocp_model.set('constr_lbx',-X_max);
 ocp_model.set('constr_ubx',X_max);                   
 ocp_model.set('constr_Jbx',[1,0,0,0]);                  

ocp_model.set('constr_x0', x0);
% ... see ocp_model.model_struct to see what other fields can be set

%% acados ocp set opts
ocp_opts = acados_ocp_opts();
ocp_opts.set('nlp_solver_max_iter', nlp_solver_max_iter);
ocp_opts.set('param_scheme_N', N);
ocp_opts.set('nlp_solver', nlp_solver);
ocp_opts.set('sim_method', sim_method);
ocp_opts.set('qp_solver', qp_solver);
ocp_opts.set('ext_fun_compile_flags', ''); % '-O2'
ocp_opts.set('levenberg_marquardt',levenberg_marquardt);
ocp_opts.set('qp_solver_cond_N', qp_solver_cond_N);

ocp_opts.set('sim_method_num_stages', sim_method_num_stages);
ocp_opts.set('sim_method_num_steps', sim_method_num_steps);
ocp_opts.set('time_steps',time_steps);
ocp_opts.set('fixed_hess', 1);


ocp_opts.set('globalization', globalization); %default

ocp_opts.set('nlp_solver_ext_qp_res',nlp_solver_ext_qp_res)

ocp_opts.set('qp_solver_tol_stat',qp_solver_tol_stat);
ocp_opts.set('qp_solver_tol_eq',qp_solver_tol_eq);
ocp_opts.set('qp_solver_tol_ineq',qp_solver_tol_ineq);
ocp_opts.set('qp_solver_tol_comp',qp_solver_tol_comp);
 ocp_opts.set('sim_method_jac_reuse',sim_method_jac_reuse);
% ... see ocp_opts.opts_struct to see what other fields can be set
%ocp_opts.set('time_steps', )
%% create ocp solver
ocp = acados_ocp(ocp_model, ocp_opts, simulink_opts);

%% Parameters for sim Modell
% integrator plant
plant_sim_method = 'irk';
plant_sim_method_num_stages = 4;
plant_sim_method_num_steps = 10;

%% plant: create acados integrator
% acados sim model
sim_model = acados_sim_model();
sim_model.set('name', [model_name '_plant']);
sim_model.set('T', T_short);

sim_model.set('sym_x', model.sym_x);
sim_model.set('sym_u', model.sym_u);
sim_model.set('sym_xdot', model.sym_xdot);
sim_model.set('dyn_type', 'implicit');
sim_model.set('dyn_expr_f', model.expr_f_impl);

% acados sim opts
sim_opts = acados_sim_opts();
sim_opts.set('method', plant_sim_method);
sim_opts.set('num_stages', plant_sim_method_num_stages);
sim_opts.set('num_steps', plant_sim_method_num_steps);
sim_opts.set('newton_iter', 30);
sim = acados_sim(sim_model, sim_opts);



