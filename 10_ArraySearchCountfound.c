#include <stdio.h>
#include <time.h>

void main()
{
	int one_fifty[50];
	int i, j, h = 0;
	int search_num = 0;
	int count = 0;         //no of times a number is repeated//

	srand(time(NULL));

	for (i = 0; i < 50; i++)
	{
		while (1)           //loop ensures there is no 0 in any slot//
		{
			one_fifty[i] = rand() % 50;
			if (one_fifty[i] == 0)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	printf("Number list:");
	for (j = 0; j < 50; j++)
	{
		printf(" %d ", one_fifty[j]);
	}
	printf("\nEnter value to search: ");
	scanf("%d", &search_num);
	printf("\nValue to find: %d\n", search_num);

	for (h = 0; h < 50; h++)           //Search operation by looping through each value of array and comparing with user's input//
	{
		if (search_num == one_fifty[h])
		{
			count++;
		}
	}

	if (count == 0)                       //displays appropriate messages//
	{
		printf("%d is NOT in the array.\n", search_num);
	}
	else
	{
		printf("%d was found %d times.\n", search_num, count);
	}
}
