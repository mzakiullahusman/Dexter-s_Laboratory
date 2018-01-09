#include <stdio.h>

float volume(float, float);

float pi = 3.142;   //constant value as global//

void main()
{
	float radius, height, vol = 0;
	int i = 0;

	for (i = 0; i <= 5; i++)
	{
		printf("\nEnter radius of cylinder: ");
		scanf_s("%f", &radius);
		printf("\nEnter height of cylinder: ");
		scanf_s("%f", &height);

		vol = volume(radius, height);  //values of radius and height are sent to function//
		printf("\nVolume is %.3f\n", vol);
	}
}

float volume(float Radius, float Height)
{
	float Volume = 0;

	Volume = pi * Height * (Radius * Radius);

	return (Volume);
}