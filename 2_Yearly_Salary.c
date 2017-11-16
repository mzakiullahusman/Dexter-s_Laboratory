/*escape.c -- uses escape characters*/
#include <stdio.h>

int main(void)
{
	float salary;

	printf("\t\t\t\t\t\a/Enter your desired monthly salary:\\");                          /*1*/
	printf("\n\n\t\t\t\t\t\t /$_________\\\b\b\b\b\b\b\b\b");                                    /*2*/
	scanf_s("%f", &salary);
	printf("\n\n\t\t$%.2f a month \t\tis \t\t$%.2f a year.", salary, salary * 12.0);      /*3*/
	printf("\n\n\t\t\t\t\thope you get your \"desired\" one\n");                          /*4*/                                                    /*4*/

	return 0;
}
