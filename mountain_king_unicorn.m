% Nature's Calling 
% A MATLAB App for Environmental Protection

% Copyright (C) 2019 Victoria A. All Rights Reserved.

%% Initialize program

close all; % close all open figures
clc; % clear command window

% setup figure to plot data
fig = figure('Name', 'Nature''s Calling');
hold on;
grid on;
title('Nature''s Calling');
xlabel('Time (hrs)');
ylabel('Pollution (ppm)')

%% Create variables

step_size = 2; % step size in hours
total_time = 24; % total time in hours
time = 0:step_size:total_time; % vector of time points to sample
data_pollution = zeros(1, length(time)); % vector for pollution data

%% Sampling loop

for i = 1:length(time)
    % sample pollution at time step i
    data_pollution(i) = sample_pollution();
end

% plot pollution data
plot(time, data_pollution);

%% Pollution data processing

% find the highest pollution value
[max_pollution, index_max] = max(data_pollution);

% present alert message
if max_pollution > 100
    alert_message = sprintf('Pollution Levels at %d ppm in %d hours!', ...
    max_pollution, time(index_max));
    fprintf('%s \n', alert_message);
    uiwait(msgbox(alert_message));
end

%% Functions

% sample_pollution function samples the pollution
% from the environment at a given time
function pollutant = sample_pollution()
    pollutant = randi(200);
end