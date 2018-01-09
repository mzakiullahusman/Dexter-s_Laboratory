#include <stdio.h>

int swap(int, int);

void main()
{
	int num1, num2;

	printf("Enter 1st number: ");
	scanf_s("%d", &num1);
	printf("Enter 2nd number: ");
	scanf_s("%d", &num2);
	swap(num1, num2);
}

int swap(int num_1, int num_2)
{
	int temp = 0;

	printf("\nBefore swapping: n1 = %d, n2 = %d", num_1, num_2);
	temp = num_1;	
	num_1 = num_2;
	num_2 = temp;
	printf("\nAfter swapping: n1 = %d, n2 = %d\n", num_1, num_2);
}