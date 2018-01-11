#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int order[100];
	int n;
	int i, j, k = 0;
	int temp;

	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\nEnter element: ");
		scanf("%d", &order[i]);
	}
	for (i = 1; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (order[i] < order[j])
			{
				temp = order[i];
				order[i] = order[j];
				order[j] = temp;
			}

		}
	}
	printf("\nIn descending order: ");
	for (i = 0; i < n; i++)
	{
		printf("\n%d", order[i]);
	}
}
