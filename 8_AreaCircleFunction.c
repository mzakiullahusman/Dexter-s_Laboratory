#include<stdio.h>

void area()
{
	float area_circle;
	float rad;

	printf("\nEnter the radius : ");
	scanf_s("%f", &rad);

	area_circle = 3.14 * rad * rad;

	printf("Area of Circle = %f\n", area_circle);
}

void main()
{
	area();
}
