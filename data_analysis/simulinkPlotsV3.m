clc
close all

%{ 
Adan Marquez
November 2024
Plotting for Thesis, this file should not be here xd
%}

%% Hat vs des

time = out.tout;

green      = '#06ad00';

est = out.estimatedStates.signals.values;
pos_hat = est(:, 1:3);
q_hat = est(:, 7:10);

des = squeeze(out.des_chi.signals.values)';

hfig = figure('Color', 'w');
t = tiledlayout(1,2, 'Padding', 'compact', 'TileSpacing', 'compact');
t.Padding = 'compact'; % or 'none' for no padding
t.TileSpacing = 'compact'; % minimal spacing between tiles

nexttile

plot(time, pos_hat(:, 1), 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(time, pos_hat(:, 2), 'LineStyle','-', 'LineWidth',2, 'Color',"blue")
plot(time, pos_hat(:, 3), 'LineStyle','-', 'LineWidth',2, 'Color',"black")

plot(time, des(:, 1), 'LineStyle','--', 'LineWidth',2, 'Color',"red")
plot(time, des(:, 2), 'LineStyle','--', 'LineWidth',2, 'Color',"blue")
plot(time, des(:, 3), 'LineStyle','--', 'LineWidth',2, 'Color',"black")

xlabel('Time [s]', 'Interpreter', 'latex')
ylabel('Position [m]', 'Interpreter', 'latex')
lgd = legend('$\hat x$', '$\hat y$', '$\hat z$', '$x_d$', '$y_d$', '$z_d$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
lgd.ItemHitFcn = @hitcallback;
legend boxoff

nexttile

plot(time, q_hat(:, 1), 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(time, q_hat(:, 2), 'LineStyle','--', 'LineWidth',2, 'Color',"blue")
plot(time, q_hat(:, 3), 'LineStyle','-.', 'LineWidth',2, 'Color',"black")
plot(time, q_hat(:, 4), 'LineStyle','--', 'LineWidth',2, 'Color', green)
xlabel('Time [s]', 'Interpreter', 'latex')
ylabel('Quaternion', 'Interpreter', 'latex')
lgd = legend('$\hat q_0$', '$\hat q_1$', '$\hat q_2$', '$\hat q_3$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
lgd.ItemHitFcn = @hitcallback;
legend boxoff

set(findall(hfig, '-property', 'FontSize'), 'FontSize', 32)
set(findall(hfig, '-property', 'Box'), 'Box', 'off')
set(findall(hfig, '-property', 'Interpreter'), 'Interpreter', 'latex')
set(findall(hfig, '-property', 'TickLabelInterpreter'), 'TickLabelInterpreter', 'latex')

picturewidth = 60;
hw_ratio = 0.4;
set(hfig,'Units','centimeters','Position',[3 3 picturewidth hw_ratio*picturewidth])

exportgraphics(hfig, fullfile("FxTQDiff/plotsV1/pos_hat.eps"), ...
    'ContentType','vector', ...
    'Resolution',600);

%% Control inputs
hfig = figure('Color', 'w');
t = tiledlayout(1,3, 'Padding', 'compact', 'TileSpacing', 'compact');
t.Padding = 'compact'; % or 'none' for no padding
t.TileSpacing = 'compact'; % minimal spacing between tiles

force = squeeze(out.controlInputs.signals.values)';

nexttile

plot(time, force(:, 3), 'LineStyle','-', 'LineWidth',2, 'Color',"black")
xlabel('Time [s]', 'Interpreter', 'latex')
ylabel('Force [N]', 'Interpreter', 'latex')
lgd = legend('$f_{z}$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
lgd.ItemHitFcn = @hitcallback;
fontsize(lgd, 36, "points")
legend boxoff

nexttile

plot(time, force(:, 1), 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(time, force(:, 2), 'LineStyle','--', 'LineWidth',2, 'Color',"blue")
xlabel('Time [s]', 'Interpreter', 'latex')
ylabel('Force [N]', 'Interpreter', 'latex')
lgd = legend('$f_{x}$', '$f_{y}$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
lgd.ItemHitFcn = @hitcallback;
fontsize(lgd, 36, "points")
legend boxoff

nexttile

plot(time, force(:, 4), 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(time, force(:, 5), 'LineStyle','--', 'LineWidth',2, 'Color',"blue")
plot(time, force(:, 6), 'LineStyle','-.', 'LineWidth',2, 'Color',"black")
xlabel('Time [s]', 'Interpreter', 'latex')
ylabel('Torque [Nm]', 'Interpreter', 'latex')
lgd = legend('$\tau_{\phi}$', '$\tau_{\theta}$', '$\tau_{\psi}$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
lgd.ItemHitFcn = @hitcallback;
fontsize(lgd, 36, "points")
legend boxoff

set(findall(hfig, '-property', 'FontSize'), 'FontSize', 32)
set(findall(hfig, '-property', 'Box'), 'Box', 'off')
set(findall(hfig, '-property', 'Interpreter'), 'Interpreter', 'latex')
set(findall(hfig, '-property', 'TickLabelInterpreter'), 'TickLabelInterpreter', 'latex')


picturewidth = 60;
hw_ratio = 0.4;
set(hfig,'Units','centimeters','Position',[3 3 picturewidth hw_ratio*picturewidth])

exportgraphics(hfig, fullfile("FxTQDiff/plotsV1/u.eps"), ...
    'ContentType','vector', ...
    'Resolution',600);

%% estimation error

hfig = figure('Color', 'w');
t = tiledlayout(1,2, 'Padding', 'compact', 'TileSpacing', 'compact');
t.Padding = 'compact'; % or 'none' for no padding
t.TileSpacing = 'compact'; % minimal spacing between tiles

e_est = squeeze(out.estimationError.signals.values);

nexttile;
times = time;
plot(times, e_est(:, 1), 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(times, e_est(:, 2), 'LineStyle','-', 'LineWidth',2, 'Color',"blue")
plot(times, e_est(:, 3), 'LineStyle','-', 'LineWidth',2, 'Color',"black")

xlabel('Time [s]', 'Interpreter', 'latex')
ylabel('error [m]', 'Interpreter', 'latex')
lgd = legend('$\tilde e_x$', '$\tilde e_{y}$', '$\tilde e_{z}$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
lgd.ItemHitFcn = @hitcallback;
legend boxoff

nexttile

plot(times, e_est(:, 4), 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(times, e_est(:, 5), 'LineStyle','-.', 'LineWidth',2, 'Color',"blue")
plot(times, e_est(:, 6), 'LineStyle','--', 'LineWidth',2, 'Color',"black")
plot(times, e_est(:, 6), 'LineStyle','-', 'LineWidth',2, 'Color',green)
xlabel('Time [s]', 'Interpreter', 'latex')
ylabel('error', 'Interpreter', 'latex')
lgd = legend('$\tilde q_0$', '$\tilde q_1$', '$\tilde q_0$', '$\tilde q_3$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
lgd.ItemHitFcn = @hitcallback;
legend boxoff


set(findall(hfig, '-property', 'FontSize'), 'FontSize', 32)
set(findall(hfig, '-property', 'Box'), 'Box', 'off')
set(findall(hfig, '-property', 'Interpreter'), 'Interpreter', 'latex')
set(findall(hfig, '-property', 'TickLabelInterpreter'), 'TickLabelInterpreter', 'latex')


picturewidth = 60;
hw_ratio = 0.4;
set(hfig,'Units','centimeters','Position',[3 3 picturewidth hw_ratio*picturewidth])

exportgraphics(hfig, fullfile("FxTQDiff/plotsV1/e_est.eps"), ...
    'ContentType','vector', ...
    'Resolution',600);

%% Adaptive gains

hfig = figure('Color', 'w');
t = tiledlayout(1,2, 'Padding', 'compact', 'TileSpacing', 'compact');
t.Padding = 'compact'; % or 'none' for no padding
t.TileSpacing = 'compact'; % minimal spacing between tiles

kt = squeeze(out.asgsmParams.signals.values)';
e_est = kt(:, 7:12);

nexttile;
times = time;
plot(times, e_est(:, 1), 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(times, e_est(:, 2), 'LineStyle','-', 'LineWidth',2, 'Color',"blue")
plot(times, e_est(:, 3), 'LineStyle','-', 'LineWidth',2, 'Color',"black")

xlabel('Time [s]', 'Interpreter', 'latex')
ylabel('error [m]', 'Interpreter', 'latex')
lgd = legend('$K_x$', '$K_{y}$', '$K_{z}$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
lgd.ItemHitFcn = @hitcallback;
legend boxoff

nexttile

plot(times, e_est(:, 4), 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(times, e_est(:, 5), 'LineStyle','-.', 'LineWidth',2, 'Color',"blue")
plot(times, e_est(:, 6), 'LineStyle','--', 'LineWidth',2, 'Color',"black")
xlabel('Time [s]', 'Interpreter', 'latex')
ylabel('Gain', 'Interpreter', 'latex')
lgd = legend('$K_1$', '$K_2$', '$K_3$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location','best');
lgd.ItemTokenSize = [40, 28];
lgd.ItemHitFcn = @hitcallback;
legend boxoff


set(findall(hfig, '-property', 'FontSize'), 'FontSize', 32)
set(findall(hfig, '-property', 'Box'), 'Box', 'off')
set(findall(hfig, '-property', 'Interpreter'), 'Interpreter', 'latex')
set(findall(hfig, '-property', 'TickLabelInterpreter'), 'TickLabelInterpreter', 'latex')


picturewidth = 60;
hw_ratio = 0.4;
set(hfig,'Units','centimeters','Position',[3 3 picturewidth hw_ratio*picturewidth])

exportgraphics(hfig, fullfile("FxTQDiff/plotsV1/kt.eps"), ...
    'ContentType','vector', ...
    'Resolution',600);