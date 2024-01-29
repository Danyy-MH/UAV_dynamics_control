close all % close all figures previously opened

%{
Adán Márquez
Jan 2024
File to retrive out data from Simulink models, for plottign purposes
and formal figures representation.
%}

%{
Make sure to run the Simulink File before this file !!
%}

%% Desired trajectory
des_traj = out.des_chi.signals.values;
des_traj = pagetranspose(des_traj);
des_traj = pagetranspose(squeeze(des_traj(1, 1:6, :)));
% figure('Name', 'Desired Trajectory', 'NumberTitle', 'off', 'WindowState', 'maximized');
% 
% plot3(des_traj(:,1), des_traj(:,2), des_traj(:,3))
% xlabel('x [m]')
% ylabel('y [m]')
% zlabel('z [m]')
% 
% grid on

%% Desired vs real trajectory XYZ

traj = out.chi.signals.values;
traj1 = pagetranspose(traj);
traj2 = pagetranspose(squeeze(traj1(1, 1:6, :)));

figure('Name', 'Desired vs Real Trajectory XYZ', 'NumberTitle', 'off', 'WindowState', 'maximized');
plot3(des_traj(:,1), des_traj(:,2), des_traj(:,3), 'LineStyle', '-', 'LineWidth', 1, 'Color', 'blue')
xlabel('X (m)','Interpreter','latex')
ylabel('Y (m)','Interpreter','latex')
zlabel('Z (m)','Interpreter','latex')

hold on

plot3(traj(:,1), traj(:,2),traj(:,3), 'LineStyle', '--', 'LineWidth', 1, 'Color', 'red');
grid on
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best');
fontsize(lgd, 16, 'points')

hold off

%% All desired vd real trajectory

figure('Name', 'Desired vs Actual Trajectory All', 'NumberTitle', 'off', 'WindowState', 'maximized');
subplot(3,2,1);
x = time;
y1 = des_traj(:,1);
plot(x,y1, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
title('Position','Interpreter','latex')
xlabel('Time (s)','Interpreter','latex')
ylabel('X (m)','Interpreter','latex')
hold on
y1 = traj(:,1);
plot(x,y1, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best');
fontsize(lgd, 10, 'points')
hold off

subplot(3,2,3);
x = time;
y2 = des_traj(:,2);
plot(x,y2, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
xlabel('Time (s)','Interpreter','latex')
ylabel('Y (m)','Interpreter','latex')
hold on
y2 = traj(:,2);
plot(x,y2, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best');
fontsize(lgd, 10, 'points')
hold off

subplot(3,2,5);
x = time;
y3 = des_traj(:,3);
plot(x,y3, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
xlabel('Time (s)','Interpreter','latex')
ylabel('Z (m)','Interpreter','latex')
hold on
y3 = traj(:,3);
plot(x,y3, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best');
fontsize(lgd, 10, 'points')
hold off

subplot(3,2,2); 
y4 = des_traj(:,4);
plot(x,y4, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
title('Attitude','Interpreter','latex')
xlabel('Time (s)','Interpreter','latex')
ylabel('$\phi$ (rad)','Interpreter','latex')
hold on
y4 = traj(:,4);
plot(x,y4, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
axis([0 60 0 0.2])
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best');
fontsize(lgd, 10, 'points')
hold off

subplot(3,2,4); 
y5 = des_traj(:,5);
plot(x,y5, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
xlabel('Time (s)','Interpreter','latex')
ylabel('$\theta$ (rad)','Interpreter','latex')
hold on
y5 = traj(:,5);
plot(x,y5, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best');
fontsize(lgd, 10, 'points')
hold off

subplot(3,2,6); 
y6 = des_traj(:,6);
plot(x,y6, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
xlabel('Time (s)','Interpreter','latex')
ylabel('$\psi$ (rad)','Interpreter','latex')
hold on
y6 = traj(:,6);
plot(x,y6, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best');
fontsize(lgd, 10, 'points')
hold off

%% UAV forces xyz

forces = out.forces.signals.values;
% forces = pagetranspose(forces);
% forces = pagetranspose(squeeze(forces(:, 1:3)));
figure('Name', 'Control Forces', 'NumberTitle', 'off', 'WindowState', 'maximized');

plot(time, forces(:,1),'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
xlabel('Time (s)','Interpreter','latex')
ylabel('Forces (N)','Interpreter','latex')
hold on
plot(time, forces(:,2),'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
plot(time, forces(:,3),'LineStyle','-.', 'LineWidth', 1, 'Color', 'blue')
hold off
lgd = legend('$F_x$', '$F_y$', '$F_z$','Interpreter','latex', 'Orientation','horizontal', 'Location','best');
fontsize(lgd, 16, 'points')

%% Adaptive gain pos and angular

kt_gain = out.ansft_var.signals.values;
kt_gain = pagetranspose(kt_gain);
kt_gain = pagetranspose(squeeze(kt_gain(1, 13:18, :)));

figure('Name', 'Adaptive linear gain', 'NumberTitle', 'off', 'WindowState', 'maximized');

hold on
plot(time, kt_gain(:,1), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
plot(time, kt_gain(:,2), 'LineStyle','--', 'LineWidth', 1, 'Color', 'blue')
plot(time, kt_gain(:,3), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'red')
hold off

xlabel('Time (s)', 'Interpreter', 'latex')
ylabel('Gain', 'Interpreter', 'latex')
lgd = legend('$K_x$', '$K_y$', '$K_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
fontsize(lgd, 16, "points")

figure('Name', 'Adaptive angular gain', 'NumberTitle', 'off', 'WindowState', 'maximized');

hold on
plot(time, kt_gain(:,4), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
plot(time, kt_gain(:,5), 'LineStyle','--', 'LineWidth', 1, 'Color', 'blue')
plot(time, kt_gain(:,6), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'red')
hold off

xlabel('Time (s)', 'Interpreter', 'latex')
ylabel('Gain', 'Interpreter', 'latex')
lgd = legend('$K_\phi$', '$K_\theta$', '$K_\psi$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
fontsize(lgd, 16, "points")

%% errors

error = out.errors.signals.values;
error = pagetranspose(error);
error = pagetranspose(squeeze(error(1, 1:6, :)));

figure('Name', 'Linear Errors', 'NumberTitle', 'off', 'WindowState', 'maximized');

plot(time, error(:,1), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
hold on
plot(time, error(:,2), 'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
plot(time, error(:,3), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'blue')
hold off

xlabel('Time (s)', 'Interpreter','latex')
ylabel('error (m)', 'Interpreter','latex')
lgd = legend('$e_x$', '$e_y$', '$e_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
fontsize(lgd, 16, "points")

%% Wind forces and wind vel

wind_f = out.wind_model.signals.values;

figure('Name', 'Wind forces', 'NumberTitle', 'off', 'WindowState', 'maximized');

plot(time, wind_f(:,4), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
hold on
plot(time, wind_f(:,5), 'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
plot(time, wind_f(:,6), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'blue')
hold off

xlabel('Time (s)', 'Interpreter','latex')
ylabel('Force (N)', 'Interpreter','latex')
lgd = legend('$f_x$', '$f_y$', '$f_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
fontsize(lgd, 16, 'points')


figure('Name', 'Wind velocities', 'NumberTitle', 'off', 'WindowState', 'maximized');

plot(time, wind_f(:,1), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
hold on
plot(time, wind_f(:,2), 'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
plot(time, wind_f(:,3), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'blue')
hold off

xlabel('Time (s)', 'Interpreter','latex')
ylabel('Velocities (m/s)', 'Interpreter','latex')
lgd = legend('$v_x$', '$v_y$', '$v_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
fontsize(lgd, 16, 'points')