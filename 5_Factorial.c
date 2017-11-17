#include <stdio.h>

void main()
{
	int n = 0;
	int	f = 1;

	printf("Enter number to find its factorial: ");
	scanf("%d", &n);

	f = n * (n - 1);              //eg if n  is 5, in this step 5 * 4//
	n--;                          //now n is decremented so it becomes 4//

	while ( n != 1 )             //if n = 1 then loop stops//
	{
		f = f * (n - 1);          //eg f before loop is 20, so now 20 * 3//
			n--;                  //eg now n becomes 2//
	}

	printf("\nFactorial is : %d\n", f);
}
