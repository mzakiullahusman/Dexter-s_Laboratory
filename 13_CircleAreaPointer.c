#include <stdio.h>
#include <conio.h>

void circle(float, float *, float *);

void main()
{
	float rad, a, p;

	printf("Enter radius of circle: ");
	scanf("%f", &rad);

	circle(rad, &a, &p);

	printf("\nThe Area is: %.2f\nThe Perimeter is: %.2f\n", a, p);
}

void circle(float r, float *area, float *perimeter)
{
	float pi = 3.142;
	*area = pi * r * r;
	*perimeter = 2 * pi * r;
}