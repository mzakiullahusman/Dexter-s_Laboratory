#include <stdio.h>

void main()
{
	int num_1, num_2, num_3, num_4, least, max = 0;

	printf("Enter first number: ");
	scanf_s("%d", &num_1);
	printf("Enter second number: ");
	scanf_s("%d", &num_2);
	printf("Enter third number: ");
	scanf_s("%d", &num_3);
	printf("Enter fourth number: ");
	scanf_s("%d", &num_4);

	if (num_1 < num_2 && num_1 < num_3 && num_1 < num_4)         //Start of smallest number determination//
	{
		printf("Smallest number: %d\n", num_1);
	}
	else if (num_2 < num_3 && num_2 < num_4)                     //Since 1st number is already compared with all others, there is no need to compare again//
	{
		printf("Smallest number: %d\n", num_2);
	}
	else if (num_3 < num_4)
	{
		printf("Smallest number: %d\n", num_3);
	}
	else                                                         //Only possible if all preceding comparisons fail//
	{
		printf("Smallest number: %d\n", num_4);
	}                                                            //End of smallest number determination//

	
	if (num_1 > num_2 && num_1 > num_3 && num_1 > num_4)         //Start of largest number determination//
	{
		printf("Largest number: %d\n", num_1);
	}
	else if (num_2 > num_3 && num_2 > num_4)
	{
		printf("Largest number: %d\n", num_2);
	}
	else if (num_3 > num_4)
	{
		printf("Largest number: %d\n", num_3);
	}
	else
	{
		printf("Largest number: %d\n", num_4);
	}                                                            //End of largest number determination//

}