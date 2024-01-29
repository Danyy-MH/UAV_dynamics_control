close all

%{
Jan 24
Adán Márquez
adanmarquez200@outlook.com

File to export Drag forces into csv files for ROS simulations
%}

%% Retrive Drag Force Data and Plotting

time = out.wind_model.time;

wind_f = out.wind_model.signals.values;

figure('Name', 'Wind forces', 'NumberTitle', 'off', 'WindowState', 'maximized');

plot(time, wind_f(:,2), 'LineStyle','-', 'LineWidth', 1, 'Color', 'red')
hold on
plot(time, wind_f(:,3), 'LineStyle','--', 'LineWidth', 1, 'Color', 'blue')
plot(time, wind_f(:,4), 'LineStyle','-.', 'LineWidth', 1, 'Color', 'black')
hold off

xlabel('Time (s)', 'Interpreter','latex')
ylabel('Force (N)', 'Interpreter','latex')
lgd = legend('$f_x$', '$f_y$', '$f_z$', 'Interpreter', 'latex', 'Orientation', 'horizontal', 'Location', 'best');
fontsize(lgd, 16, 'points')

%% Export to csv file

csv_data = wind_f(:, 2:end);
csv_file_name = 'dragForces.csv';

% write the data in csv_file_name file

writematrix(csv_data, csv_file_name);
