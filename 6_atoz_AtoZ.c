#include <stdio.h>

void main()
{
	char l = 'a';           //l is lowercase//
	char u = 'A';           //u is uppercase//

	for (l = 'a'; l <= 'z' ; l++)
	{
		printf("\t%c", l);
	} 
	for (u = 'A'; u <= 'Z'; u++)
	{
		printf("\t%c", u);
	}
	printf("\n");
}