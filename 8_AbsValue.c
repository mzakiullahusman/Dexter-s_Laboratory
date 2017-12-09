#include <stdio.h>

void absolute(int);

void main()
{
	int num;

	printf("Enter number: ");
	scanf("%d", &num);

	absolute(num);

}

void absolute(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	printf("Absolute value is: %d\n", num);
}
