#include <stdio.h>

void main()
{
	int user_1 = 0;              //user_1 is random number 1 for 1st dice and user_2 is for the other//
	int user_2 = 7;
	int sum = 0;     
	                                        
	printf("HERE COMES THE DICE!\n");

	while (user_1 != user_2)                                    //initial values are not equal so loop runs//
	{
	printf("Enter 1st (random) number between 1 and 6: ");                  //Alternate to random//
	scanf_s("%d", &user_1);
	printf("\nEnter 2nd (random) number between 1 and 6: ");
	scanf_s("%d", &user_2);
	if (user_1 >= 1 && user_1 <= 6 && user_2 >= 1 && user_2 <= 6)         //Validation check//
	{
		printf("\nRoll #1: %d", user_1);
		printf("\nRoll #2: %d", user_2);

		sum = user_1 + user_2;
		printf("\nThe total is: %d\n", sum);

		if (user_1 == user_2)                         //Condition for exit//
		{
			break;
		}
	}
	else
	{
		printf("\nInvalid numbers entered\n");
	}
	
	}

}
