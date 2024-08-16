%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Init acados and load warmstart trajectory                               %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear all
close all
clc

folder = 'C:\Users\Administrator\Furuta'; % add project path
% Add this folder plus all subfolders to the path.
addpath(genpath(folder))

folder = 'C:\Users\Administrator\acados'; % add acados path
% Add this folder plus all subfolders to the path.
addpath(genpath(folder))

acados_env_variables_windows

%% Get warm start trajectory
myJsonFile = "warm_start_setup_1b.json";% Setting 3 5ms
N_warm = 9;
text = fileread(myJsonFile);
data = jsondecode(text);

x_guess=[];
u_guess=[];
for i=1:N_warm
    eval(['x_guess=[x_guess;data.x_' num2str(i) '];'])
    eval(['u_guess=[u_guess;data.u_' num2str(i) '];'])
    i=i+1;
end
eval(['x_guess=[x_guess;data.x_' num2str(i) '];'])
