#include <stdio.h>
int main()
{
	int sec_largest = 0;
	int data[100], i, n, step, temp;
	printf("Enter the number of elements to be sorted: ");
	scanf("%d", &n);
	for (i = 0; i<n; ++i)
	{
		printf("%d. Enter element: ", i + 1);
		scanf("%d", &data[i]);
	}

	for (step = 0; step<n - 1; ++step)
	for (i = 0; i<n - step - 1; ++i)
	{
		if (data[i]>data[i + 1])   /* To sort in descending order, change > to < in this line. */
		{
			temp = data[i];
			data[i] = data[i + 1];
			data[i + 1] = temp;
		}
	}
	printf("In ascending order: ");
	for (i = 0; i < n; ++i)
	{
		printf("%d  ", data[i]);
		sec_largest = data[n - 2];
	}
	printf("\nSecond largest is: %d\n", sec_largest);
	getch();
	getchar();
	return 0;
}
