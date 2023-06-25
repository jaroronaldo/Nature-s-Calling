#include <stdio.h>

/* 
   Nature's Calling
   A Program to Connect with Nature 
 */

int main() 
{
	// Variables for the program 
	int num_animals;
	float avg_miles_walked;
	char outdoor_activity[25];
	
	// Information about the user 
	printf("What is your name?\n");
	char name[25];
	scanf("%s", name);
	printf("How old are you, %s?\n", name);
	int age;
	scanf("%d", &age);
	
	// Ask the user about how many animals they have seen 
	printf("How many animals have you seen in your life %s?\n", name);
	scanf("%d", &num_animals);
	
	// Ask the user how far they walk on average
	printf("On average, how many miles do you walk every week %s?\n", name);
	scanf("%f", &avg_miles_walked);
	
	// Ask the user what their favorite outdoor activity is
	printf("What is your favorite outdoor activity, %s?\n", name);
	scanf("%s", outdoor_activity);
	
	// Reseting the Variables
	num_animals = 0;
	avg_miles_walked = 0.0;
	strcpy(outdoor_activity, "");
	
	// Encourage the user to get out and explore
	printf("Nature is calling, %s! Get out and explore the outdoors!\n", name);
	
	return 0;
}