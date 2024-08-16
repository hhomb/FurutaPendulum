%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%            Ex2:  NMPC Control Furuta Pendulum           %%
%%       Optimal Control with Applications in Robotics     %%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Author: Hannes Homburger

%% Init 
clear 
close all
clc

%% Include CasADi and OCP definition
!import CasADi!

% Parameters
N = 10; % number of steps
steps = 10; % number of immediate simulation steps per step  
h = 0.005; % stepsize of one simulation step

% Define OCP 
opti = casadi.Opti();

!Setup OCP!

%% Closed-Loop simulation test
T_end = 1; % Gesamtzeit [s]

% Initial state
x_0 = [ 0;       % \theta_1 [rad]
        pi;      % \theta_2 [rad]
        0;       % \omega_1 [rad/s]
        0];      % \omega_2 [rad/s]
    
% Initial guess input trajectory 
U0 = zeros(N,1);    

% Alloc memory
x = zeros(4,floor(T_end/h));
u = zeros(1,floor(T_end/h));
% Init state
x(:,1) = x_0;

%% Simulation
for i=1:length(x) 
    %% Apply control
    if mod(i,steps)==1||steps==1 % after steps  
        
        % NLP parametrization
        opti.set_value(X_0, !fill in!
        opti.set_initial(U, !fill in!
        
        % Solve NLP
        sol = opti.solve();
        
        % Get solution
        U_opt = sol.value(U);
        u(i) = !fill in!
        
        % Shift control sequence for the next iteration
        U0(1:end-1) = U_opt(2:end);
        
    else % Select control
        u(i) = u(i-1);
    end
    % Apply control
    x(:,i+1) = x(:,i) + RK4_f(x(:,i),u(i),h);
    
    % Visu
    Theta_z = x(1,i+1);
    Theta_x = x(2,i+1);
    figure(1)
    visu_furuta(Theta_z,Theta_x,i*h)
    drawnow
end
%% Visu
figure
plot(x','-o')
grid('on');
xlabel('$k$','interpreter','latex')
ylabel('$x_k$','interpreter','latex')
legend('$\theta_1,k$','$\theta_2,k$','$\omega_1,k$','$\omega_2,k$','interpreter','latex')
set(gca,'fontsize',15)
figure
plot(u,'-o')
grid('on');
xlabel('$k$','interpreter','latex')
ylabel('$u_k$','interpreter','latex')
set(gca,'fontsize',15)
%% Nested functions
function dy=RK4_f(x,u,h)
    k1 = f(x,u);
    k2 = f(x+h/2.*k1,u);
    k3 = f(x+h/2.*k2,u);
    k4 = f(x+h.*k3,u);
    dy = h/6*(k1+2*k2+2*k3+k4);   
end

function visu_furuta(Theta_z,Theta_x,t)
%Theta_z = Theta_z;
Theta_x = Theta_x-pi;
L0 = 0.25;
L1 = 0.1035; % 103.5mm
L2 = 0.173; % 173mm


Motor = [0, 0;
         0, 0;
         0, L0];
Arm1_End = RotationMatrix(0, 0, Theta_z)*[L1;0;L0];
Arm1_Start =  [0;  
               0;  
               L0];
Arm1 = [Arm1_Start,Arm1_End]; 

Arm2_End = RotationMatrix(Theta_x, 0, Theta_z)*[0;0;-L2];
Arm2_End = Arm2_End+Arm1_End;

Arm2 = [Arm1_End,Arm2_End];
Tisch = [-2*L1 ,2*L1   , 2*L1 , -2*L1 -2*L1;
         -2*L1 ,-2*L1  , 2*L1 ,  2*L1  -2*L1;
         0     ,0      , 0    ,  0     0]; 

      hold('off')
      plot(0,0)
      hold('on')  
     
      plot3(Motor(1,:),Motor(2,:),Motor(3,:),'color','k','linewidth',5)
      plot3(Arm1(1,:),Arm1(2,:),Arm1(3,:),'color','r','linewidth',5)
      plot3(Arm2(1,:),Arm2(2,:),Arm2(3,:),'color','b','linewidth',5)
      plot3(Tisch(1,:),Tisch(2,:),Tisch(3,:),'color','k','linewidth',10)  
      view(45,45)
      xlim([-0.25 0.25])
      ylim([-0.25 0.25])
      zlim([0 0.5])
      title(['Time: ' num2str(t) ' s'],'interpreter','latex')
      refreshdata(gca)
end
function R = RotationMatrix(phi, theta, psi)
    cp = cos(phi); sp = sin(phi);
    Rx =[1, 0, 0; 0, cp, -sp; 0, sp, cp];

    ct = cos(theta); st = sin(theta);
    Ry =[ct,0,st; 0,1,0; -st,0,ct];

    cy = cos(psi); sy = sin(psi);
    Rz =[cy,-sy,0; sy, cy,0; 0,0,1];

    R = Rz*Ry*Rx;

end
function dx = f(x,u)
%% Input
% state vector
% theta1    = x(1); %[rad]
theta2    = x(2)-pi; %[rad]
theta1_dt = x(3); %[rad/s]
theta2_dt = x(4); %[rad/s]
% input
tau       = u;    %[Nm]

%% Parameters
% Lengths
L1 = 0.1035; % 103.5mm
l2 = 0.0955; % 92.1mm

% Mass
m2 = 0.192; % 199g

% Inertia
J2 = 7.653e-04; % kg/mm^2
g = 9.81; % N/kg
J1_ges = 5.3875e-04 + 0.75e-04; 
J2_ges = J2 + m2*l2^2;
J0 = J1_ges + m2*L1^2;

% Damping
k = 0.098;
b2 = 2*k*J2_ges; 
b1 = 40*10^(-4); 

% External torques
tau1 = tau;
tau2 = 0;

%% Equations of motion
Matrix1 = [J0+J2_ges*sin(theta2)^2, m2*L1*l2*cos(theta2); m2*L1*l2*cos(theta2), J2_ges]^(-1);
Matrix2 = [b1+0.5*theta2_dt*J2_ges*sin(2*theta2), 0.5*theta1_dt*J2_ges*sin(2*theta2)-m2*L1*l2*sin(theta2)*theta2_dt; -0.5*theta1_dt*J2_ges*sin(2*theta2), b2];

theta_dt2 = Matrix1*([tau1; tau2]-Matrix2*[theta1_dt; theta2_dt]-[0; g*m2*l2*sin(theta2)]);

%% dynamics
dx = [ theta1_dt;
       theta2_dt;
       theta_dt2(1);
       theta_dt2(2)];
end
