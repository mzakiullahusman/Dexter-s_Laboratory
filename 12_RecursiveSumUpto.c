#include <stdio.h>

int sum(int);

void main()
{
	int x;

	printf("Enter number up till which sum is calculated: ");
	scanf("%d", &x);

	x = sum(x);
	printf("\nSum is: %d\n", x);
}

int sum(int x)
{
	if(x == 1)           //base case//
	{
		return 1;
	}
	else        //first general case//
	{
		return x + sum(x - 1);
	}
}
