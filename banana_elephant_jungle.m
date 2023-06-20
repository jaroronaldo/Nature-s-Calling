% Nature's Calling 

% Set frequency for each musical sound 
fs1 = 2200;
fs2 = 2450;
fs3 = 2700;
fs4 = 3200;

% Create Time array 
t1 = linspace(0,5,fs1*5);

% Generate Samples for each sound 
y1 = sin(2*pi*220*t1);
y2 = sin(2*pi*247.5*t1);
y3 = sin(2*pi*275*t1);
y4 = sin(2*pi*330*t1);

% Create array for final combination of samples
y_org = zeros(1,length(t1));

% Create array of sound weights 
weight1 = 0.25;
weight2 = 0.25;
weight3 = 0.25;
weight4 = 0.25;


% Combine all sounds in one array 
for i = 1:length(t1)
    
    % Calculate each sound sample
    y_org(i) = (weight1*y1(i))+(weight2*y2(i))+(weight3*y3(i))+(weight4*y4(i)); % use a loop to add each sample
    
end

% Plot both Sounds 
plot(t1,y_org)
title('Nature''s Calling')
xlabel('time')
ylabel('amplitude')

% Play Final Combination of Sounds 
sound(y_org,fs1)