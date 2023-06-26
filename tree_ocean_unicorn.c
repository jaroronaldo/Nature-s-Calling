#include <stdio.h> 
#include <stdlib.h> 

/* Define Constants */ 
#define PI 3.14159265 
#define E 2.718281828 
#define G 9.8 

/* Nature's Calling Program */ 
int main () 
{ 
	// Variables to store the inputs 
	double h1, h2, h3, h4; 

	// Take the input values 
	printf("Enter the four heights (in meters) of the hills: "); 
	scanf("%lf %lf %lf %lf", &h1, &h2, &h3, &h4); 

	// Calculate the total height 
	double total_height = h1 + h2 + h3 + h4; 

	// Calculate the height difference 
	double diff_h1h2 = h2 - h1; 
	double diff_h2h3 = h3 - h2; 
	double diff_h3h4 = h4 - h3; 

	//Calculate the total angle 
	double total_angle = (PI * (diff_h1h2 + diff_h2h3 + diff_h3h4)) / 180; 

	//Calculate the total force 
	double total_force = (2 * E * G * total_height) * total_angle; 

	// Print the total force 
	printf("The total force exerted by nature is %lf N.\n", total_force); 

	return 0; 
} 

//Calculate the area of each hill
double area_h1 = PI * h1 * h1; 
double area_h2 = PI * h2 * h2; 
double area_h3 = PI * h3 * h3; 
double area_h4 = PI * h4 * h4; 

//Calculate the total area
double total_area = area_h1 + area_h2 + area_h3 + area_h4; 

//Calculate the area difference
double diff_h1h2 = area_h2 - area_h1; 
double diff_h2h3 = area_h3 - area_h2; 
double diff_h3h4 = area_h4 - area_h3; 

//Calculate the total angle
double total_angle = (PI * (diff_h1h2 + diff_h2h3 + diff_h3h4)) / 360; 

//Calculate the total pressure
double total_pressure = (2 * E * G * total_area) * total_angle; 

// Print the total pressure
printf("The total pressure exerted by nature is %lf N.\n", total_pressure); 

//Calculate the height difference between consecutive hills
double diff_h1h2 = h2 - h1; 
double diff_h2h3 = h3 - h2; 
double diff_h3h4 = h4 - h3; 

//Calculate the total force
double total_force = (2 * E * G * total_height) * (diff_h1h2 + diff_h2h3 + diff_h3h4); 

// Print the total force
printf("The total force exerted by nature is %lf N.\n", total_force); 
 
//Calculate the total distance between consecutive hills
double dist_h1h2 = h1 + h2; 
double dist_h2h3 = h2 + h3; 
double dist_h3h4 = h3 + h4; 

//Calculate the total angle
double total_angle = (PI * (dist_h1h2 + dist_h2h3 + dist_h3h4)) / 180; 
 
//Calculate the total acceleration
double total_acceleration = (2 * E * G * total_height) * total_angle; 

// Print the total acceleration
printf("The total acceleration exerted by nature is %lf N.\n", total_acceleration); 

//Calculate the area of each hill
double area_h1 = PI * h1 * h1; 
double area_h2 = PI * h2 * h2; 
double area_h3 = PI * h3 * h3; 
double area_h4 = PI * h4 * h4; 

//Calculate the total area
double total_area = area_h1 + area_h2 + area_h3 + area_h4; 

//Calculate the total angle
double total_angle = (PI * total_area) / 360; 

//Calculate the total acceleration
double total_acceleration = (2 * E * G * total_height) * total_angle; 

// Print the total acceleration
printf("The total acceleration exerted by nature is %lf N.\n", total_acceleration); 

//Calculate the average height
double avg_height = (h1 + h2 + h3 + h4) / 4; 

//Calculate the total angle
double total_angle = (PI * avg_height) / 180; 

//Calculate the total velocity
double total_velocity = (2 * E * G * total_height) * total_angle; 

// Print the total velocity
printf("The total velocity exerted by nature is %lf N.\n", total_velocity); 

//Calculate the total kinetic energy
double total_kinetic_energy = 0.5 * total_velocity * total_velocity; 

// Print the total kinetic energy
printf("The total kinetic energy exerted by nature is %lf N.\n", total_kinetic_energy); 

//Calculate the total potential energy
double total_potential_energy = G * total_height; 

// Print the total potential energy
printf("The total potential energy exerted by nature is %lf N.\n", total_potential_energy); 

//Calculate the total work
double total_work = total_kinetic_energy + total_potential_energy; 

// Print the total work
printf("The total work exerted by nature is %lf N.\n", total_work); 

//Calculate the average slope
double avg_slope = total_height / (h2 - h1 + h3 - h2 + h4 - h3); 

//Calculate the total angle
double total_angle = (PI * avg_slope) / 180; 

//Calculate the total friction
double total_friction = (2 * E * G * total_height) * total_angle; 

// Print the total friction
printf("The total friction exerted by nature is %lf N.\n", total_friction); 

//Calculate the total momentum
double total_momentum = total_velocity * total_height; 

// Print the total momentum
printf("The total momentum exerted by nature is %lf N.\n", total_momentum); 

//Calculate the total angular momentum
double total_angular_momentum = total_momentum * total_angle; 

// Print the total angular momentum
printf("The total angular momentum exerted by nature is %lf N.\n", total_angular_momentum); 

//Calculate the total torque
double total_torque = total_momentum * total_angle; 

// Print the total torque
printf("The total torque exerted by nature is %lf N.\n", total_torque); 

//Calculate the average acceleration
double avg_acceleration = total_velocity / avg_slope; 

//Calculate the total angle
double total_angle = (PI * avg_acceleration) / 180; 

//Calculate the total power
double total_power = (2 * E * G * total_height) * total_angle; 

// Print the total power
printf("The total power exerted by nature is %lf N.\n", total_power); 

//Calculate the total work done
double total_work_done = total_power * total_angle; 

// Print the total work done
printf("The total work done by nature is %lf N.\n", total_work_done); 

//Calculate the total energy dissipated
double total_energy_dissipated = total_work_done * total_angle; 

// Print the total energy dissipated
printf("The total energy dissipated by nature is %lf N.\n", total_energy_dissipated); 

//Calculate the total force of gravity
double total_force_gravity = G * total_height * total_angle; 

// Print the total force of gravity
printf("The total force of gravity exerted by nature is %lf N.\n", total_force_gravity); 

//Calculate the total force of air resistance
double total_force_air_resistance = total_velocity * total_angle; 

// Print the total force of air resistance
printf("The total force of air resistance exerted by nature is %lf N.\n", total_force_air_resistance); 

//Calculate the total force of centripetal acceleration
double total_force_centripetal = total_acceleration * total_angle; 

// Print the total force of centripetal acceleration
printf("The total force of centripetal acceleration exerted by nature is %lf N.\n", total_force_centripetal); 

//Calculate the average temperature
double avg_temperature = (h1 + h2 + h3 + h4) / 4; 

//Calculate the total angle
double total_angle = (PI * avg_temperature) / 180; 

//Calculate the total thermal energy
double total_thermal_energy = (2 * E * G * total_height) * total_angle; 

// Print the total thermal energy
printf("The total thermal energy exerted by nature is %lf N.\n", total_thermal_energy); 

//Calculate the total energy of the system
double total_energy_system = total_kinetic_energy + total_potential_energy + total_thermal_energy; 

// Print the total energy of the system
printf("The total energy of the system exerted by nature is %lf N.\n", total_energy_system); 

//Calculate the total entropy of the system
double total_entropy = total_energy_system / avg_temperature; 

// Print the total entropy of the system
printf("The total entropy of the system exerted by nature is %lf N.\n", total_entropy);