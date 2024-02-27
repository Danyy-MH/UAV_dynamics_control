clc
close all

%{
Adan Marquez
Simple Second Order Filter Code Implementation
%}

%% Initialize variables

% time for simulation
dt = 0.01;
t = 0:dt:60;

% initialize place-holders for SOF data
gamma_hat_1 = zeros(1, length(t) + 1);
gamma_hat_2 = zeros(1, length(t) + 1);
gamma_hat_3 = zeros(1, length(t));
e_hat = zeros(1, length(t));

% initial conditions
gamma_hat_1(1) = 0;
gamma_hat_2(1) = 0;
gamma_hat_3(1) = 0;

gamma_hat_3_last = 0;
gamma_hat_2_last = 0;

% filter gains
zeta = 1;
omega_n = 30;

% position and vel data
f = 0.25;
arg = f * t;
pose = sin(arg);
pose_dot = f * cos(arg);

% start Second Order Filter for loop
for i = 1:1:length(t)
    % disp(i)
    % desired minus estimated
    e_hat(i) = pose(i) - gamma_hat_1(i);
    % SOF
    gamma_hat_3(i) = omega_n * (e_hat(i) * omega_n - 2 * gamma_hat_2(i) * zeta);
    % integrate state
    gamma_hat_2(i + 1) = dt * (gamma_hat_3(i) + gamma_hat_3_last) / 2 + gamma_hat_2(i);
    gamma_hat_3_last = gamma_hat_3(i);
    gamma_hat_1(i + 1) = dt * (gamma_hat_2(i) + gamma_hat_2_last) / 2 + gamma_hat_1(i);
    gamma_hat_2_last = gamma_hat_2(i);
end

e_hat_dot = pose_dot - gamma_hat_2(1:(length(gamma_hat_2) - 1));
%% Plot results
figure('Name', 'Second Order Filter');
subplot(2, 2, 1)
plot(t, pose);
grid on
xlabel('Time [s]')
ylabel('Position [m]')
hold on
plot(t, gamma_hat_1(1:length(gamma_hat_1) - 1))
title('Desired vs Est Positions')
l = legend('Desired', 'Estimated');
l.ItemHitFcn = @hitcallback;

subplot(2, 2, 2)
plot(t, pose_dot);
grid on
hold on
plot(t, gamma_hat_2(1:length(gamma_hat_2) - 1))
xlabel('Time [s]')
ylabel('Velocity [m/s]')
title('Desired Velocities')
l = legend('Desired', 'Estimated');
l.ItemHitFcn = @hitcallback;

subplot(2, 2, 3)
plot(t, e_hat);
grid on
xlabel('Time [s]')
ylabel('error [m]')
title('Estimated Position error')

subplot(2, 2, 4)
plot(t, e_hat_dot);
grid on
xlabel('Time [s]')
ylabel('velocity [m/s]')
title('Estimated Velocity error')

figure
plot(t, noise)

%% Legend Callback

function hitcallback(src,evnt)
    if strcmp(evnt.Peer.Visible,'on')
        evnt.Peer.Visible = 'off';
    else 
        evnt.Peer.Visible = 'on';
    end
end
