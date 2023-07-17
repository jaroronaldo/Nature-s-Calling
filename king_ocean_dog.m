% Nature's Calling
% This is a MATLAB program to generate a sound simulation of Nature's calling.

% Define constants
SAMPLE_RATE = 44100;

% Create arrays to store data
birdChirps = zeros(1,SAMPLE_RATE);
crickets = zeros(1,SAMPLE_RATE);
wind = zeros(1,SAMPLE_RATE);
stream = zeros(1,SAMPLE_RATE);

% Generate Bird Chirps
A1 = 0.5; % Amplitude of chirps
T1 = 0.5; % Duration of chirps
F1 = 220; % Frequency of chirps
numChirps = 50; % Number of chirps

for i=1:numChirps
    t = 0:1/SAMPLE_RATE:T1;
    birdChirps = birdChirps + A1*sin(2*pi*F1*t);
end

% Generate Cricket Sounds
A2 = 0.2; % Amplitude of cricket sounds
T2 = 0.25; % Duration of cricket sounds
F2 = 4410; % Frequency of cricket sounds
numCrickets = 25; % Number of cricket sounds

for i=1:numCrickets
    tc = 0:1/SAMPLE_RATE:T2;
    crickets = crickets + A2*sin(2*pi*F2*tc);
end

% Generate Wind Sounds
A3 = 0.1; % Amplitude of the wind sound
T3 = 0.5; % Duration of the wind sound
F3 = 44100; % Frequency of the wind sound
numWind = 10; % Number of the wind sound

for i=1:numWind
    tw = 0:1/SAMPLE_RATE:T3;
    wind = wind + A3*sin(2*pi*F3*tw);
end

% Generate Stream Sounds
A4 = 0.2; % Amplitude of the stream sound
T4 = 0.5; % Duration of the stream sound
F4 = 1760; % Frequency of the stream sound
numStream = 10; % Number of the stream sound

for i=1:numStream
    ts = 0:1/SAMPLE_RATE:T4;
    stream = stream + A4*sin(2*pi*F4*ts);
end

% Generate Sound
NatureSound = birdChirps + crickets + wind + stream;

% Play Sound
sound(NatureSound, SAMPLE_RATE);