#include <stdio.h> 

/* 
Name: Nature's Calling 
Author: [Insert Author Name] 
Date: [Insert Date] 
*/ 

//Declare global variables 
int birds; 
int fish; 

//Prototype functions 
void sky_birds(); 
void water_fish(); 

int main() 
{ 
	//Declare local variables 
	int trees; 
	int plants; 
	
	//Assign values to variables 
	trees = 20; 
	plants = 5; 
	birds = 50; 
	fish = 66; 
	
	//Call the functions 
	sky_birds(); 
	water_fish(); 
	
	//Generate output 
	printf("Trees in nature: %d\n", trees); 
	printf("Plants in nature: %d\n", plants); 
	
	return 0; 
} 

void sky_birds() 
{ 
	//Declare local variables 
	int sky_colour; 
	
	//Assign values to variables 
	sky_colour = 0x00AFFF; 
	
	//Generate output 
	printf("Number of birds in the sky: %d\n", birds); 
	printf("Sky colour: %X\n", sky_colour); 
} 

void water_fish() 
{ 
	//Declare local variables 
	int water_colour; 
	
	//Assign values to variables 
	water_colour = 0x00FFFF; 
	
	//Generate output 
	printf("Number of fish in the water: %d\n", fish); 
	printf("Water colour: %X\n", water_colour); 
}