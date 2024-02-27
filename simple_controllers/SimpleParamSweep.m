clc
close all

%{
Adan Marquez
Feb 2024
Parameter Sweep for tunning variables
%}

%% Simulink Connection

% open_system("simple_FXTDiff_ANSFT")
open_system("simple_SOF_ANSFT")

% ask user start, step, and limit for the sweeping analysis

prompt = "Parameter Sweep start: ";
start = input(prompt);
prompt = "Parameter Sweep step: ";
step = input(prompt);
prompt = "Parameter Sweep limit: ";
%%

limit = input(prompt);
gain = start:step:limit;
fprintf("Number of simulations to run: %4f \n", length(gain));

%% ask user parameter to sweep
% prompt = "Parameter Sweep name: ";
% ps_name = "/" + input(prompt, "s");
% ps_name = input(prompt, "s");
%%
for k = 1:length(gain)
    set_param([bdroot, '/alpha_u'], 'Value', num2str(gain(k)));
    simOut(k) = sim(gcs);
    disp(['Completed ', num2str(k), ' of ', num2str(length(gain)), ' simulations']);
end

%% Plot System Parameter Sweep respones
clf % refresh plots
figure('Name', 'Parameter Sweep Analysis I', 'NumberTitle', 'off');
% , 'WindowState', 'maximized')
subplot(2, 2, 1)
l_list = cell(1, length(gain) + 1);
logsout = simOut(1).logsout;
output2 = logsout.getElement('qd');
y_out2 = output2.Values.Data;
% length(y_out2)
y_out2 = reshape(y_out2, [length(y_out2), 1]);
x_out2 = output2.Values.Time;
plot(x_out2, y_out2)
l_list{1} = strcat('Ref');
hold on
for k = 1:length(gain)
    logsout = simOut(k).logsout;
    output = logsout.getElement('gamma_hat_1');
    y_out = output.Values.Data;
    x_out = output.Values.Time;
    l_list{k + 1} = strcat('Gain = ', num2str(gain(k)));
    plot(x_out, y_out);
    hold on;
end
l = legend(l_list);
l.ItemHitFcn = @hitcallback;

grid on
xlabel('Time [s]')
ylabel('Position [m]')
title('Estimated Positions: $\hat \gamma_1$', 'Interpreter', 'latex')

subplot(2, 2, 2)
l_list = cell(1, length(gain) + 1);
logsout = simOut(1).logsout;
output2 = logsout.getElement('qd_dot');
y_out2 = output2.Values.Data;
y_out2 = reshape(y_out2, [length(y_out2), 1]);
x_out2 = output2.Values.Time;
plot(x_out2, y_out2)
l_list{1} = strcat('Ref');
hold on
for k = 1:length(gain)
    logsout = simOut(k).logsout;
    output = logsout.getElement('gamma_hat_2');
    y_out = output.Values.Data;
    x_out = output.Values.Time;
    l_list{k + 1} = strcat('Gain = ', num2str(gain(k)));
    plot(x_out, y_out);
    hold on;
end
l = legend(l_list);
l.ItemHitFcn = @hitcallback;

grid on
xlabel('Time [s]')
ylabel('Velocity [m/s]')
title('Estimated Velocities: $\hat \gamma_2$', 'Interpreter', 'latex')

subplot(2, 2, 3)
l_list = cell(1, length(gain));
for k = 1:length(gain)
    logsout = simOut(k).logsout;
    output = logsout.getElement('u');
    y_out = output.Values.Data;
    x_out = output.Values.Time;
    l_list{k} = strcat('Gain = ', num2str(gain(k)));
    plot(x_out, y_out);
    hold on;
end
l = legend(l_list);
l.ItemHitFcn = @hitcallback;

grid on
xlabel('Time [s]')
ylabel('Force [N]')
title('Control Input: $u$', 'Interpreter', 'latex')

subplot(2, 2, 4)
l_list = cell(1, length(gain));
for k = 1:length(gain)
    logsout = simOut(k).logsout;
    output = logsout.getElement('e_hat');
    y_out = output.Values.Data;
    x_out = output.Values.Time;
    l_list{k} = strcat('Gain = ', num2str(gain(k)));
    plot(x_out, y_out);
    hold on;
end
l = legend(l_list);
l.ItemHitFcn = @hitcallback;

grid on
xlabel('Time [s]')
ylabel('error [m]')
title('Estimated error: $\hat e$', 'Interpreter', 'latex')

%% Controller parameters I
figure('Name', 'Parameter Sweep Analysis II', 'NumberTitle', 'off');
% , 'WindowState', 'maximized')
subplot(2, 2, 1)
l_list = cell(1, length(gain));
for k = 1:length(gain)
    logsout = simOut(k).logsout;
    output = logsout.getElement('e');
    y_out = output.Values.Data;
    x_out = output.Values.Time;
    l_list{k} = strcat('Gain = ', num2str(gain(k)));
    plot(x_out, y_out);
    hold on;
end
l = legend(l_list);
l.ItemHitFcn = @hitcallback;

grid on
xlabel('Time [s]')
ylabel('Error [m]')
title('Position error: $e$', 'Interpreter', 'latex')

subplot(2, 2, 2)
l_list = cell(1, length(gain));
for k = 1:length(gain)
    logsout = simOut(k).logsout;
    output = logsout.getElement('e_dot');
    y_out = output.Values.Data;
    x_out = output.Values.Time;
    l_list{k} = strcat('Gain = ', num2str(gain(k)));
    plot(x_out, y_out);
    hold on;
end
l = legend(l_list);
l.ItemHitFcn = @hitcallback;

grid on
xlabel('Time [s]')
ylabel('Velocity error [m/s]')
title('Velocitiy error: $\dot e$', 'Interpreter', 'latex')

subplot(2, 2, 3)
l_list = cell(1, length(gain));
for k = 1:length(gain)
    logsout = simOut(k).logsout;
    output = logsout.getElement('sigma');
    y_out = output.Values.Data;
    x_out = output.Values.Time;
    l_list{k} = strcat('Gain = ', num2str(gain(k)));
    plot(x_out, y_out);
    hold on;
end
l = legend(l_list);
l.ItemHitFcn = @hitcallback;

grid on
xlabel('Time [s]')
ylabel('[m]')
title('Sliding surface: $\sigma$', 'Interpreter', 'latex')

subplot(2, 2, 4)
l_list = cell(1, length(gain));
for k = 1:length(gain)
    logsout = simOut(k).logsout;
    output = logsout.getElement('kt');
    y_out = output.Values.Data;
    x_out = output.Values.Time;
    l_list{k} = strcat('Gain = ', num2str(gain(k)));
    plot(x_out, y_out);
    hold on;
end
l = legend(l_list);
l.ItemHitFcn = @hitcallback;

grid on
xlabel('Time [s]')
ylabel('gain')
title('Adaptive Gain: $K$', 'Interpreter', 'latex')

%% Legend Callback

function hitcallback(src,evnt)
    if strcmp(evnt.Peer.Visible,'on')
        evnt.Peer.Visible = 'off';
    else 
        evnt.Peer.Visible = 'on';
    end
end