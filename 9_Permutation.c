#include <stdio.h>

int factorial(int);
int permutation(int);

void main()
{
	int n, r = 0;
	int num, denom = 0;  //numerator and denominator//
	int difference = 0;     //difference of n and r//
	int result = 0;

	printf("Enter (n): ");
	scanf_s("%d", &n);
	printf("\nEnter (r): ");
	scanf_s("%d", &r);

	num = factorial(n);            
	difference = n - r;
	
	result = permutation(num, denom, difference); //three values are sent to permutation function//

	printf("\nResult is %d\n", result);
}

int factorial(int N)
{
	int fact = 1;       //factorial of n in the numerator of permutation formula//
	int i;

	for (i = 1; i <= N; i++)
	{
		fact = fact * i;
	}

	return (fact);
}

int permutation(int Num, int Denom, int Difference)
{ 
	int Result = 0;

	Denom = factorial(Difference);
	Result = Num / Denom;

	return (Result);
}


