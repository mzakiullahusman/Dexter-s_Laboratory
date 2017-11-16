#include <stdio.h>;

void main()
{
	int x, result = 0;
	printf("Check if your number is even or odd\n");
	printf("\nEnter a natural number: ");  
	scanf_s("%d", &x);
	result = x / 2;                       
	if (result * 2 == x)                //Result is actually less than half if number is odd//
	{
		printf("\nNumber is even\n");   //If number is even than the result is exactly half//
	}
	else
	{
		printf("\nNumber is odd\n");
	}
	
}