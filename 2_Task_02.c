#include <stdio.h>

int main()
{
	//Assigning values to height, radius and the constant pi. Initialising volume.
	float height = 12;
	float radius = 7;
	float volume = 0;
	const float pi = 3.142;

	//Taking values of height and radius from user
	printf("Enter height of cylinder:\n");
	scanf_s("%f", &height);
	printf("Enter radius of cylinder:\n");
	scanf_s("%f", &radius);

	//Using the formula of volume for cylinder
	volume = pi * radius * radius * height;

	//Giving results
	printf("The volume of cylinder with height \"%.2f\" is \"%.2f\" \n\n", height, volume);

	return 0;
}