#include <stdio.h>

void main()
{
	float x, squared, result = 0;                                      //Assigned decimal type to all//
	printf("Enter value for \"x\": ");                               
	scanf_s("%f", &x);
	printf("\nThe polynomial expression is \"(6x^2 + 3x) / (3x)\"");  //Shows the user expression used//
	squared = x * x;                                                  //Input is squared for use in following expression//
	result = ((6 * squared) + (3 * x)) / (3 * x);                     //Calculations in brackets are taking place first//
	printf("\nThe result is: %f\n\n", result);
}