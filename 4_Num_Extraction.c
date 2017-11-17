#include <stdio.h>

int main()
{
	int num, unit, pretens, tens, hundreds, product = 0;      

	printf("Enter a three-digit number: \n");
	scanf_s("%d", &num);

	hundreds = num / 100;         //Extracting the first number from the three digit number//
	pretens = num / 10;          //Making into two digit to extract the middle number only//
	tens = pretens % 10;
	unit = num % 10;
	                            //printf("\nTest: %d", hundreds);//
	                           //printf("\nTest: %d", tens);//
	                          //printf("\nTest: %d\n", unit);//
	product = hundreds * tens * unit;
	printf("The product of the three digits is: %d\n", product);
	
	return 0;
}