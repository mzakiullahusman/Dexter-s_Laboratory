#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert1st2Capital(char[], int);

void main()
{
	char input[100];
	char first[100];
	int i = 0;

	printf("Enter any words to capitalize their first letter: ");
	gets(input);

	printf("\nlength is: %d\n", strlen(input));

	convert1st2Capital(input, i);
	puts(input);
}

void convert1st2Capital(char input[], int i)
{

	input[0] -= 32;       //for first character capitalization//

	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] == ' ')   //for successive words//
		{
			i++;
			if (input[i] >= 'a' && input[i] <= 'z')
			{
				input[i] -= 32;
			}
		}
	}
}
