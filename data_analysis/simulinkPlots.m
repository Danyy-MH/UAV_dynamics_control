clc % clean command window
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
des_traj = out.chi.signals.values(:, [2, 4, 6, 8, 10, 12]);
time = out.tout;
f_size = 36;
% figure('Name', 'Desired Trajectory', 'NumberTitle', 'off', 'WindowState', 'maximized');
% 
% plot3(des_traj(:,1), des_traj(:,2), des_traj(:,3))
% xlabel('x [m]')
% ylabel('y [m]')
% zlabel('z [m]')
% 
% grid on

%% Desired vs real trajectory XYZ

traj = out.chi.signals.values(:, [1, 3, 5, 7, 9, 11]);
figure('Name', 'Desired vs Real Trajectory XYZ', 'NumberTitle', 'off', 'WindowState', 'maximized');
plot3(des_traj(:,1), des_traj(:,2), des_traj(:,3), 'LineStyle', '-', 'LineWidth', 1, 'Color', 'blue')
xlabel('X (m)','Interpreter','latex')
ylabel('Y (m)','Interpreter','latex')
zlabel('Z (m)','Interpreter','latex')

hold on

plot3(traj(:,1), traj(:,2),traj(:,3), 'LineStyle', '--', 'LineWidth', 1, 'Color', 'red');
grid off
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','northeast', 'Orientation','horizontal');
lgd.ItemTokenSize = [50, 28];
legend boxoff
fontsize(lgd, f_size, 'points')
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;
hold off
hold off

%% All desired vd real trajectory

figure('Name', 'Desired vs Actual Trajectory All', 'NumberTitle', 'off', 'WindowState', 'maximized');
subplot(3,2,1);
x = time;
y1 = des_traj(:,1);
plot(x,y1, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
title('Position','Interpreter','latex', 'FontSize',16)
% xlabel('Time (s)','Interpreter','latex')
ylabel('X (m)','Interpreter','latex')
hold on
y1 = traj(:,1);
plot(x,y1, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
grid off
max_value = max(y1) + 2;
min_value = min(y1) - 1.5;
axis([0 100 min_value max_value])
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best', 'Orientation','horizontal');
lgd.ItemTokenSize = [50, 28];
legend boxoff
fontsize(lgd, f_size, 'points')
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;
hold off

subplot(3,2,3);
x = time;
y2 = des_traj(:,2);
plot(x,y2, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
% xlabel('Time (s)','Interpreter','latex')
ylabel('Y (m)','Interpreter','latex')
hold on
y2 = traj(:,2);
plot(x,y2, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
max_value = max(y2) + 2;
min_value = min(y2) - 1.5;
axis([0 100 min_value max_value])
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best', 'Orientation','horizontal');
lgd.ItemTokenSize = [50, 28];
legend boxoff
fontsize(lgd, f_size, 'points')
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;
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
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','best', 'Orientation','horizontal');
lgd.ItemTokenSize = [50, 28];
legend boxoff
fontsize(lgd, f_size, 'points')
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;
hold off

subplot(3,2,2); 
y4 = des_traj(:,4);
plot(x,y4, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
title('Attitude','Interpreter','latex', 'FontSize',16)
% xlabel('Time (s)','Interpreter','latex')
ylabel('$\phi$ (rad)','Interpreter','latex')
hold on
y4 = traj(:,4);
plot(x,y4, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
axis([0 100 0 0.2])
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','northeast', 'Orientation','horizontal');
lgd.ItemTokenSize = [50, 28];
legend boxoff
fontsize(lgd, f_size, 'points')
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;
hold off

subplot(3,2,4); 
y5 = des_traj(:,5);
plot(x,y5, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
% xlabel('Time (s)','Interpreter','latex')
ylabel('$\theta$ (rad)','Interpreter','latex')
hold on
y5 = traj(:,5);
plot(x,y5, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','northeast', 'Orientation','horizontal');
lgd.ItemTokenSize = [50, 28];
legend boxoff
fontsize(lgd, f_size, 'points')
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;
ylim([-0.2 0.2])
hold off

subplot(3,2,6); 
y6 = des_traj(:,6);
plot(x,y6, 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
xlabel('Time (s)','Interpreter','latex')
ylabel('$\psi$ (rad)','Interpreter','latex')
hold on
y6 = traj(:,6);
plot(x,y6, 'LineStyle','--', 'LineWidth', 1, 'Color', 'red');
lgd = legend('Desired', 'Actual','Interpreter','latex', 'Location','northeast', 'Orientation','horizontal');
lgd.ItemTokenSize = [50, 28];
legend boxoff
fontsize(lgd, f_size, 'points')
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;
ylim([-0.2 0.2])
hold off

%% UAV forces z

forces = out.forces.signals.values(:, 1:3);
figure('Name', 'Thrust', 'NumberTitle', 'off', 'WindowState', 'maximized');
title('Thrust','Interpreter','latex', 'FontSize',16)
plot(time, forces(:,1),'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
xlabel('Time (s)','Interpreter','latex')
ylabel('Forces (N)','Interpreter','latex')
lgd = legend('$F_z$','Interpreter','latex', 'Orientation','horizontal', 'Location','northeast');
lgd.ItemTokenSize = [50, 28];
legend boxoff
fontsize(lgd, f_size, 'points')
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;

%% UAV Forces xy

figure('Name', 'Horizontal Forces', 'NumberTitle', 'off', 'WindowState', 'maximized');
title('Horizontal Forces','Interpreter','latex', 'FontSize',16)
plot(time, forces(:,2),'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
hold on
plot(time, forces(:,3),'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
hold off
xlabel('Time (s)','Interpreter','latex')
ylabel('Forces (N)','Interpreter','latex')
lgd = legend('$F_x$', '$F_y$','Interpreter','latex', 'Orientation','horizontal', 'Location','northeast');
lgd.ItemTokenSize = [50, 28];
legend boxoff
fontsize(lgd, f_size , 'points')
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size ;


%% Adaptive gain pos and angular

kt_gain = out.ansft_var.signals.values;

figure('Name', 'Adaptive linear gain', 'NumberTitle', 'off', 'WindowState', 'maximized');

hold on
plot(time, kt_gain(:,1), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
plot(time, kt_gain(:,2), 'LineStyle','--', 'LineWidth', 1, 'Color', 'blue')
plot(time, kt_gain(:,3), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'red')
hold off

xlabel('Time (s)', 'Interpreter', 'latex')
ylabel('Gain', 'Interpreter', 'latex')
lgd = legend('$K_x$', '$K_y$', '$K_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, "points")
legend boxoff
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;

figure('Name', 'Adaptive angular gain', 'NumberTitle', 'off', 'WindowState', 'maximized');

hold on
plot(time, kt_gain(:,4), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
plot(time, kt_gain(:,5), 'LineStyle','--', 'LineWidth', 1, 'Color', 'blue')
plot(time, kt_gain(:,6), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'red')
hold off

xlabel('Time (s)', 'Interpreter', 'latex')
ylabel('Gain', 'Interpreter', 'latex')
lgd = legend('$K_\phi$', '$K_\theta$', '$K_\psi$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, "points")
legend boxoff
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;

%% errors

error = out.errors.signals.values;

figure('Name', 'Linear Errors', 'NumberTitle', 'off', 'WindowState', 'maximized');

plot(time, error(:,3), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
hold on
plot(time, error(:,1), 'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
plot(time, error(:,2), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'blue')
hold off

xlabel('Time (s)', 'Interpreter','latex')
ylabel('error (m)', 'Interpreter','latex')
lgd = legend('$e_x$', '$e_y$', '$e_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, "points")
legend boxoff
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;

%% Wind forces and wind vel

wind_f = out.wind_model.signals.values;

figure('Name', 'Wind forces', 'NumberTitle', 'off', 'WindowState', 'maximized');

plot(time, wind_f(:,4), 'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
hold on
plot(time, wind_f(:,5), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'blue')
plot(time, wind_f(:,6), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
hold off

xlabel('Time (s)', 'Interpreter','latex')
ylabel('Force (N)', 'Interpreter','latex')
lgd = legend('$\delta_x$', '$\delta_y$', '$\delta_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, 'points')
legend boxoff
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;


figure('Name', 'Wind velocities', 'NumberTitle', 'off', 'WindowState', 'maximized');

plot(time, wind_f(:,1), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
hold on
plot(time, wind_f(:,2), 'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
plot(time, wind_f(:,3), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'blue')
hold off

xlabel('Time (s)', 'Interpreter','latex')
ylabel('Velocities (m/s)', 'Interpreter','latex')
lgd = legend('$v_x$', '$v_y$', '$v_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, 'points')
legend boxoff
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;

%% Legend Callback

function hitcallback(src,evnt)
    if strcmp(evnt.Peer.Visible,'on')
        evnt.Peer.Visible = 'off';
    else 
        evnt.Peer.Visible = 'on';
    end
end