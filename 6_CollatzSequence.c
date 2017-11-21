#include <stdio.h>

void main()
{
	int n, z=1, count = 0;

    printf("Enter number: ");           //Input//
	scanf_s("%d", &n);
	
	printf("\nStarting number: %d", n);
	printf("\n%d", n);

	z = n;

	while (z != 1)
	{
		if (z % 2 == 0)                   //When num is even//
		{
			z /= 2;	
			printf("\t%d", z);
		}
		else                                 //When num is odd//
		{
			z = (3 * z) + 1;
			printf("\t%d", z);
		} 
		count++;
	} 
	printf("\n\nTerminated after %d steps.\n", count);
}