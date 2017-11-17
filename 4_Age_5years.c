#include <stdio.h>

void main()
{
	int age, future_age, past_age = 0;           //Declaring variables for present, past and future ages//
	char name[30];                               //Size of name can be at max 30//
	printf("Enter your name: \n");
	gets_s(name, 30);                            //Gets allows entering of full names//
	printf("Hi, %s! How old are you? ", name);
	scanf_s("%d", &age);

	future_age = age + 5;                        //Calculations//
	past_age = age - 5;

	printf("\n%s, in five years you will be 25 years old.", name);
	printf("\nAnd five years ago you were %d!\n", past_age);
}