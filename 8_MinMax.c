#include <stdio.h>

void main()
{
	int num = 0;
	int max = 0;
	int min = 100;
	int count = 0;
	int i = 0;

	do
	{
		printf("\nEnter number: ");
		scanf_s("%d", &num);
		
		if (num > max)
		{
			max = num;
		}
		else if (num < min)
		{
			min = num;
		}
			
	} while (num >= 1);

	printf("\nMaximum is %d and minimum is %d\n", max, min);
}