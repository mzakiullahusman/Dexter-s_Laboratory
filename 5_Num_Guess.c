#include <stdio.h>
void main()
{
	int secret_num = 7, user_input = 0;      //Secret number is 7//

	printf("I have chosen a number between 1 and 10. Try to guess it.\n");
	while (user_input != secret_num)             //Initial value of input is 0 which is not equal to 7 so the loop will execute//
	{
		scanf_s("%d", &user_input);              //Input command is in the loop//
		printf("Your guess: %d", user_input);
		if (user_input == secret_num)
		{
			printf("\nThat's right! You guessed it.\n");
			break;                                   //Loop breaks if condition is met//
		}
		else
		{
			printf("\nThat is incorrect. Guess again.");
		}
		
	}
	return 0;
}