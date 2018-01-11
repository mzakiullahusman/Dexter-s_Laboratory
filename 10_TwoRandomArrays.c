#include <stdio.h>
#include <time.h>

void main()
{
	int first_array[10];
	int sec_array[10];
	int i, j, h = 0;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
        first_array[i] = 11 + rand() % 111;
        sec_array[i] = 11 + rand() % 89;
	}
	printf("               First array is:\n");
	for (j = 0; j < 10; j++)
	{
		printf("Slot %d contains %d\n", j, first_array[j]);
	}
	printf("               Second array is:\n");
	for (h = 0; h < 10; h++)
	{
		printf("Slot %d contains %d\n", h, sec_array[h]);
	}
}
