#include <stdio.h>

int sum(int, int); 	//Function prototypes//
int minus(int, int);
int multiply(int, int);
int divide(int, int);


int main()
{
	int num1, num2;
	int result = 0;
	char operator = 'c';

	printf("\n Enter the num1 and num2 : ");
	scanf(" %d", &num1);
	scanf(" %d", &num2);

	while (operator)
	{
		printf("\n Enter q to quit");
		printf("\n Enter the operator : ");
		scanf(" %c", &operator);

		if (operator == 'q')
		{
			break;
		}

		switch (operator)
		{
		case '+':
			result = sum(num1, num2);
			printf("\nSum is: %d", result);
			break;

		case '-':
			result = minus(num1, num2);
			printf("\nDifference is: %d", result);
			break;

		case '*':
			result = multiply(num1, num2);
			printf("\nProduct is: %d", result);
			break;

		case '/':
			result = divide(num1, num2);
			printf("\nQuotient is: %d", result);
			break;

		default:
			printf("\nInvalid operator!");
		}
	}
	getch();
	return 0;
}

int sum(int b, int c)
{
	int a;
	a = b + c;
	return a;
}

int minus(int b, int c)
{
	int a;
	a = b - c;
	return a;
}

int multiply(int b, int c)
{
	int a;
	a = b * c;
	return a;
}

int divide(int b, int c)
{
	int a;
	a = b / c;
	return a;
}
