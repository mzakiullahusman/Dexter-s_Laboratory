#include <stdio.h>

void main()
{
	int one_fifty[10];
	int i, j, h = 0;        //loop variables//
	int search_num = 0;
	int count = 0;         //no of times a number is repeated//
	int slot_num = -1;   //initialized with any value outside the array slots//

	for (i = 0; i < 10; i++)
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
	printf("Array:");
	for (j = 0; j < 10; j++)
	{
		printf(" %d ", one_fifty[j]);
	}
	printf("\nEnter value to search: ");
	scanf("%d", &search_num);
	printf("\nValue to find: %d\n", search_num);

	for (h = 0; h < 10; h++)
	{
		if (search_num == one_fifty[h])
		{
			slot_num = h + 1;
			count++;
		}
	}

	if (count == 0)                       //displays appropriate messages//
	{
		printf("%d is NOT in the array.\n", search_num);
	}
	if (slot_num != -1)
	{
		printf("%d is in slot %d.\n", search_num, slot_num);
	}
}
