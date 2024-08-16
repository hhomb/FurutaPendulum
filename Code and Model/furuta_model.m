

function model = furuta_model()

import casadi.*

%% system dimensions
nx = 4;
nu = 1;

%% system parameters

% Distances
L1 = 0.1035; % 103.5mm
l2 = 0.0955; % 92.1mm

% mass
m2 = 0.192; % 199g

% inertia
J2 = 7.653e-04; % kg/mm^2
g = 9.81; % N/kg

% inertia arm 1 
J1_ges = 5.3875e-04 + 0.75e-04; % J1 + m1*l1^2;
% inertia arm 2
J2_ges = J2 + m2*l2^2;
% total inertia at motor
J0 = J1_ges + m2*L1^2;

% damping hub motor
b1 = 40*10^(-4); 

% damping coupling between both arms
k = 0.098;
b2 = 2*k*J2_ges; 

% applied torques
tau2 = 0;

%% named symbolic variables
theta1 = SX.sym('theta1');  % angle around vertical axis (axis next to motor) [rad]
theta2 = SX.sym('theta2');  % angle around horizontal axis (axis next to mass) [rad]
dtheta1 = SX.sym('dtheta1'); % angular velocity of rod 1 [rad/s]
dtheta2 = SX.sym('dtheta2'); % angular velocity of rod 2 [rad/s]
tau1 = SX.sym('tau1');         % torque acting on first rod [Nm]

%% (unnamed) symbolic variables
sym_x = vertcat(theta1, theta2, dtheta1, dtheta2);
sym_xdot = SX.sym('xdot', nx, 1);
sym_u = tau1;
theta2=theta2-pi;
%% dynamics
sintheta2 = sin(theta2);
cos_theta2 = cos(theta2);
sin_2_theta2 = sin(2*theta2);
J2_sin_2_theta2 = J2_ges*sin_2_theta2;
common_expr = 0.5*dtheta1*J2_sin_2_theta2;
m2L1l2 = m2*L1*l2;

Matrix1 = [J0+J2_ges*sintheta2^2, m2L1l2*cos_theta2; m2L1l2*cos_theta2, J2_ges]^(-1);
Matrix2 = [b1+0.5*dtheta2*J2_sin_2_theta2, common_expr-m2L1l2*sintheta2*dtheta2; -common_expr, b2];

ddtheta = Matrix1*([tau1; tau2]-Matrix2*[dtheta1; dtheta2]-[0; g*m2*l2*sintheta2]);

expr_f_expl = vertcat(dtheta1, ...
                      dtheta2, ...
                      ddtheta(1), ...
                      ddtheta(2));
expr_f_impl = expr_f_expl - sym_xdot;

%% constraints
expr_h = sym_u;

%% cost
W_x = diag([50,500,1,1]);
W_u = 1000;
expr_ext_cost_e = sym_x'* DM(W_x).sparsify() * sym_x;
expr_ext_cost = expr_ext_cost_e + sym_u' * W_u * sym_u;
expr_ext_cost_0 = sym_u' * W_u * sym_u;


%% LQR
% fd=sqrt(eps);
% x0 = [0;0;0;0];
% u0 = 0;
% A1 = (f(x0+[1;0;0;0].*fd,u0)-f(x0-[1;0;0;0].*fd,u0))/(2*fd);
% A2 = (f(x0+[0;1;0;0].*fd,u0)-f(x0-[0;1;0;0].*fd,u0))/(2*fd);
% A3 = (f(x0+[0;0;1;0].*fd,u0)-f(x0-[0;0;1;0].*fd,u0))/(2*fd);
% A4 = (f(x0+[0;0;0;1].*fd,u0)-f(x0-[0;0;0;1].*fd,u0))/(2*fd);
% 
% B  = (f(x0,u0+fd)-f(x0,u0-fd))/(2*fd);
% A = [A1,A2,A3,A4];
% Ts=0.025;
% [K_LQR,P_LQR,eig_of_ctrl_system]=lqrd(A,B,W_x,W_u,Ts);

% model.W_e = P_LQR;
% model.W_e = W_x.*10;



%% populate structure
model.nx = nx;
model.nu = nu;
model.sym_x = sym_x;
model.sym_xdot = sym_xdot;
model.sym_u = sym_u;
model.expr_f_expl = expr_f_expl;
model.expr_f_impl = expr_f_impl;
model.expr_h = expr_h;
model.expr_ext_cost = expr_ext_cost;
model.expr_ext_cost_e = expr_ext_cost_e;
model.expr_ext_cost_0 = expr_ext_cost_0;

% model.W = W;

end
