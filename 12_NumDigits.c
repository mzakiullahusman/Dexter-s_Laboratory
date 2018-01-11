#include <stdio.h>

int num_digits(int);

void main()
{
	int num, digits;

	printf("Enter number to find no. of digits: ");
	scanf("%d", &num);

	digits = num_digits(num);

	printf("\nNo. of digits: %d\n", digits);
}

int num_digits(int x)
{
	if (x < 10)           
	{
		return 1;
	}
	else             
	{
		return 1 + num_digits(x / 10);
	}
}