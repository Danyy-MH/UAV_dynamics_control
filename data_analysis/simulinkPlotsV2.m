clc % clean command window
close all % close all figures previously opened
%%
addpath('/home/adan/MATLAB Add-Ons/Functions/ZoomPlot')


%% ALL INPUTS

time = tout;
forces = squeeze(control.signals.values(1:3, 1, :));
torques = squeeze(control.signals.values(4:6, 1, :));

forces = transpose(forces);
torques = transpose(torques);

hei = 0.25;

figure('Name', 'Horizontal Forces and Torques', 'NumberTitle', 'off', 'WindowState', 'maximized', 'Color', 'w');

subplot(3, 1, 1)
plot(time, forces(:,3), 'LineStyle','-', 'LineWidth', 1, 'Color', 'black')
% plot(time, forces(:,3), 'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
ylabel('Force [N]', 'Interpreter', 'latex')
lgd = legend('$f_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
fontsize(lgd, 36, "points")
legend boxoff
ax = gca;
ax.FontSize = 36;
xticklabels({});  % Remove x-axis tick labels
pos = get(gca, 'Position');
pos(4) = hei; % Adjust the height of the subplot
set(gca, 'Position', pos);

subplot(3,1,2);
hold on
plot(time, forces(:,1), 'LineStyle','-', 'LineWidth', 1, 'Color', 'red')
plot(time, forces(:,2), 'LineStyle','--', 'LineWidth', 1, 'Color', 'blue')
hold off
ylabel('Force [N]', 'Interpreter', 'latex')
lgd = legend('$f_x$', '$f_y$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, 36, "points")
legend boxoff
box on
ax = gca;
ax.FontSize = 36;
xticklabels({});  % Remove x-axis tick labels
pos = get(gca, 'Position');
pos(4) = hei; % Adjust the height of the subplot
set(gca, 'Position', pos);

subplot(3,1,3);
hold on
plot(time, torques(:,1), 'LineStyle','-', 'LineWidth', 1, 'Color', 'red')
plot(time, torques(:,2), 'LineStyle','--', 'LineWidth', 1, 'Color', 'blue')
plot(time, torques(:,3), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'black')
hold off
xlabel('Time (s)', 'Interpreter', 'latex')
ylabel('Torque [Nm]', 'Interpreter', 'latex')
lgd = legend('$\tau_\phi$', '$\tau_\theta$', '$\tau_\psi$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, 36, "points")
legend boxoff
box on
ax = gca;
ax.FontSize = 36;
pos = get(gca, 'Position');
% pos(2) = 0.16; % Adjust the position of the subplot
pos(4) = hei; % Adjust the height of the subplot
set(gca, 'Position', pos);
yticks_old = get(gca, 'YTick');
% Define the new tick values
yticks_new = yticks_old * 10;
% Set the new tick values to the y-axis
set(gca, 'YTickLabel', yticks_new);

%% Adaptive Gains

kt_gain = squeeze(ansft_var.signals.values(8:13, 1, :));
kt_gain = transpose(kt_gain);
f_size = 24;

figure('Name', 'Adaptive Gains', 'NumberTitle', 'off', 'WindowState', 'maximized', 'Color', 'w');

subplot(2,1,1);
hold on
plot(time, kt_gain(:,1), 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
plot(time, kt_gain(:,2), 'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
plot(time, kt_gain(:,3), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'black')
hold off
ylabel('Gain', 'Interpreter', 'latex')
lgd = legend('$K_x$', '$K_y$', '$K_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, "points")
legend boxoff
box on
ax = gca;
ax.FontSize = f_size;
xticklabels({});  % Remove x-axis tick labels
pos = get(gca, 'Position');
pos(4) = 0.38; % Adjust the height of the subplot
set(gca, 'Position', pos);

subplot(2,1,2);
hold on
plot(time, kt_gain(:,4), 'LineStyle','-', 'LineWidth', 1, 'Color', 'blue')
plot(time, kt_gain(:,5), 'LineStyle','--', 'LineWidth', 1, 'Color', 'red')
plot(time, kt_gain(:,6), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'black')
hold off
xlabel('Time (s)', 'Interpreter', 'latex')
ylabel('Gain', 'Interpreter', 'latex')
lgd = legend('$K_\phi$', '$K_\theta$', '$K_\psi$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, "points")
legend boxoff
box on
ax = gca;
ax.FontSize = f_size;
pos = get(gca, 'Position');
pos(2) = 0.16; % Adjust the position of the subplot
pos(4) = 0.38; % Adjust the height of the subplot
set(gca, 'Position', pos);

%% Errors
green      = '#06ad00';
time = out.tout;
error = squeeze(out.errors.signals.values(:, 1, :));
% error = squeeze(errors.signals.values(1:6, 1, :));
error = transpose(error);
f_size = 24;

hfig = figure('Name', 'Linear Errors', 'NumberTitle', 'off');
t = tiledlayout(2, 1, 'Padding','compact', 'TileSpacing','compact');
t.Padding = "compact";
t.TileSpacing = 'compact';

nexttile

plot(time, error(:,1), 'LineStyle','-', 'LineWidth', 2, 'Color', 'red')
hold on
plot(time, error(:,2), 'LineStyle','--', 'LineWidth', 2, 'Color', 'blue')
plot(time, error(:,3), 'LineStyle','-.', 'LineWidth', 2, 'Color', 'black')
hold off

xlabel('Time (s)', 'Interpreter','latex')
ylabel('error (m)', 'Interpreter','latex')
lgd = legend('$e_x$', '$e_y$', '$e_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, "points")
legend boxoff
box on
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;

nexttile

plot(time, error(:,7), 'LineStyle','-', 'LineWidth', 2, 'Color', 'red')
hold on
plot(time, error(:,8), 'LineStyle','--', 'LineWidth', 2, 'Color', 'blue')
plot(time, error(:,9), 'LineStyle','-.', 'LineWidth', 2, 'Color', 'black')
plot(time, error(:,10), 'LineStyle',':', 'LineWidth', 2, 'Color', green)
hold off

xlabel('Time (s)', 'Interpreter','latex')
ylabel('error (rad)', 'Interpreter','latex')
lgd = legend('$q_1$', '$q_2$', '$q_3$', '$q_4$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
lgd.ItemTokenSize = [50, 28];
lgd.ItemHitFcn = @hitcallback;

fontsize(lgd, f_size, "points")
legend boxoff
box on
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;

set(findall(hfig, '-property', 'FontSize'), 'FontSize', 32)
set(findall(hfig, '-property', 'Box'), 'Box', 'off')
set(findall(hfig, '-property', 'Interpreter'), 'Interpreter', 'latex')
set(findall(hfig, '-property', 'TickLabelInterpreter'), 'TickLabelInterpreter', 'latex')

picturewidth = 30;
hw_ratio = 1.2;
set(hfig,'Units','centimeters','Position',[3 3 picturewidth hw_ratio*picturewidth])

%% Estimation erros
close all

time = out.tout;

e_hat = squeeze(est_e.signals.values(1:6, 1, :));
e_hat = transpose(e_hat);
f_size = 24;

figure('Name', 'Estimation Errors', 'NumberTitle', 'off', 'WindowState', 'maximized');

% subplot(2,1,1);
plot(time, e_hat(:,1), 'LineStyle','-', 'LineWidth', 1, 'Color', 'red')
hold on
plot(time, e_hat(:,2), 'LineStyle','--', 'LineWidth', 1, 'Color', 'blue')
plot(time, e_hat(:,3), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'black')
hold off
% 


xlabel('Time [s]', 'Interpreter','latex')
ylabel('Estimation error [m]', 'Interpreter','latex')
lgd = legend('$\tilde{\zeta}_x$', '$\tilde{\zeta}_y$', '$\tilde{\zeta}_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, "points")
legend boxoff
box on
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;

axes('Position',[.35 .4 .35 .3])
box on
plot(time, e_hat(:, 1), 'LineWidth', 1, 'Color', 'red', 'LineStyle','-');
hold on
plot(time, e_hat(:, 2), 'LineWidth', 1, 'Color', 'blue', 'LineStyle','--');
plot(time, e_hat(:, 3), 'LineWidth', 1, 'Color', 'black', 'LineStyle','-.');
hold off
grid on
axis([0 1 -0.03 0.15])

% Attitude

figure('Name', 'Estimation Errors', 'NumberTitle', 'off', 'WindowState', 'maximized');

% subplot(2,1,1);
plot(time, e_hat(:,4), 'LineStyle','-', 'LineWidth', 1, 'Color', 'red')
hold on
plot(time, e_hat(:,5), 'LineStyle','--', 'LineWidth', 1, 'Color', 'blue')
plot(time, e_hat(:,6), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'black')
hold off
% 
% max(abs(error(:, 1)))
% max(abs(error(:, 2)))
% max(abs(error(:, 3)))

xlabel('Time [s]', 'Interpreter','latex')
ylabel('Estimation error [rad]', 'Interpreter','latex')
lgd = legend('$\tilde{\zeta}_x$', '$\tilde{\zeta}_y$', '$\tilde{\zeta}_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
lgd.ItemTokenSize = [50, 28];
fontsize(lgd, f_size, "points")
legend boxoff
box on
set(gcf,'color','w');
ax = gca;
ax.FontSize = f_size;

axes('Position',[.35 .5 .35 .3])
box on
plot(time, e_hat(:, 4), 'LineWidth', 1, 'Color', 'red', 'LineStyle','-');
hold on
plot(time, e_hat(:, 5), 'LineWidth', 1, 'Color', 'blue', 'LineStyle','--');
plot(time, e_hat(:, 6), 'LineWidth', 1, 'Color', 'black', 'LineStyle','-.');
hold off
grid on
axis([0 1 -0.03 0.08])

%% Toggle Function

function hitcallback(src,evnt)
    if strcmp(evnt.Peer.Visible,'on')
        evnt.Peer.Visible = 'off';
    else 
        evnt.Peer.Visible = 'on';
    end
end