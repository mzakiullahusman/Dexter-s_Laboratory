#include <stdio.h>

void main()
{
	float x = -10.0;
	float y = 0;

	printf("x                  y");
	printf("\n---------------------");
	for (float x = -10.0; x <= 10; x += 0.5)
	{
		y = x * x;
		printf("\n%.1f         %.2f\n", x, y);
	}
}
