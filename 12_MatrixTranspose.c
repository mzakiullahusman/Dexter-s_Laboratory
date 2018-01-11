#include <stdio.h>

void main()
{
	int matrix_A[3][3];
	int matrix_B[3][3];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nEnter element (%d , %d): ", i, j);
			scanf("%d", &matrix_A[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matrix_B[j][i] = matrix_A[i][j];
		}
	}
	printf("\nMatrix A is:\n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("%d\t: ", matrix_A[i][j]);
		}
	}
	printf("\nMatrix B is:\n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("%d\t: ", matrix_B[i][j]);
		}
	}
	
}