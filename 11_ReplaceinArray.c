#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // for srand function//

void replace(int, char[]);

void main()
{
	char array[10];
	int i;
	//srand(time(NULL));//          //To prove program works, list is static//

	for (i = 0; i < 10; i++)
	{
		array[i] = rand() % 127;        //ASCII codes from 0 to 120 for characters//
		printf("\n%c\t\n", array[i]);
	}
	printf("\nNow replaced with:");
	replace(i, array);
}

void replace(int i, char array[])
{

	for (i = 0; i < 10; i++)
	{
		if (array[i] == 84)      //ASCII code for T//
		{
			array[i] = 90;          //ASCII code for Z//
		}
		printf("\n%c\t\n", array[i]);
	}
}


