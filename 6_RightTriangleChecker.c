#include <stdio.h>

void main()
{
	int x, y, z, a, b, c = 0;            //a, b and c are for Pythagoras theorem//

	do                                             //Everything in this loop is executed at least once//
	{
		printf("Enter three integers: ");
		printf("\nSide 1: ");
		scanf("%d", &x);
		do
		{
			printf("\nSide 2: ");
			scanf("%d", &y);
			if (x > y)
			{
				printf("%d is smaller than %d. Try again.\n", y, x);
				continue;                                  //Takes control back to start of this nested loop//
			}
			printf("\nSide 3: ");
			scanf("%d", &z);
			while (y > z)
			{
				printf("%d is smaller than %d. Try again.\n", z, y);
				printf("\nSide 3: ");
				scanf("%d", &z);
			}
		}
		while (x >= y && y >= z);
		a = z * z;
		b = y * y;
		c = x * x;
		printf("\n\nYour three sides are %d %d %d\n", x, y, z);
		if (a = b + c)
		{
			printf("\nThese sides *do* make a right triangle.\n");
			break;
		}
		else
		{
			printf("NO! These sides do not make a right triangle!\n");
		}
		printf("%d %d %d", a, b, c);
	}
	while (a = b + c);	    //Program ends when right angle triangle is found//
}
