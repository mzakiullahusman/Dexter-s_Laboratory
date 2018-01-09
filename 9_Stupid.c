#include <stdio.h>
void half(void);//changes age and feet into half
void twice(void);//changes age and feet into double

int age;
float feet;

int main()
{
	printf("How old are you: ");
	scanf_s("%d", &age);
	printf("\nHow tall are you (in feet): ");
	scanf_s("%f", &feet);
	printf("\nYou are %d years old and %.1f feet tall.n", age, feet);
	half();
    twice();	
	printf("\n\nBut you're not really %d years old or %.1f feet tall.n\n", age, feet);
	return(0);
}
void half()
{
	age = age / 2;
	printf("\nHalf of your age is %d", age);
	feet = feet / 2;
	printf("\nHalf of your height is %.1f", feet);
	
}
void twice()
{
	age = age * 4;
	printf("\nTwice your age is %d", age);
	feet = feet * 4;
	printf("\nTwice your height is %.1f", feet);
}