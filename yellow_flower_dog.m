% Nature's Calling
%  A MATLAB Program by [Author]

% Preallocating variables
N = 2000;
t = zeros(1,N);
x = zeros(1,N);
y = zeros(1,N);

% Setting the axes grid
minX = -8;
maxX = 8;
minY = -8;
maxY = 8;

% Creating a grid of nodes
[x,y] = meshgrid(minX:1:maxX,minY:1:maxY);

% Creating the nature's calling image
for i=1:N
    t(i) = (sin(x(i)) + cos(y(i)));
end

% Generating the plot
figure(1);
imagesc(t);
colormap('jet');
axis('image');

% Setting the axis labels
xlabel('X (units)');
ylabel('Y (units)');
title('Nature''s Calling');

% Setting the colorbar
colormap(jet(N));
h = colorbar;
ylabel(h, 't (units)');