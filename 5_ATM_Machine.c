#include <stdio.h>

int main()
{
	int pin = 1234;
	int tries = 0;
	int entry = 0;
	int maximum_tries = 4;           //The maximum attempts allowed to enter the correct PIN//

	printf("WELCOME TO THE SEECS BANK.\n");

	printf("\nENTER YOUR PIN: ");
	scanf_s("%d", &entry);
	tries++;

	while (entry != pin && tries < maximum_tries)
	{
		printf("\nINCORRECT PIN. TRY AGAIN.\n");

		printf("ENTER YOUR PIN: ");
		scanf_s("%d", &entry);
		tries++;
	}
	if (entry == pin)
		printf("\nPIN ACCEPTED. YOU NOW HAVE ACCESS TO YOUR ACCOUNT.\n");
	else if (tries >= maximum_tries)
		printf("\nYOU HAVE RUN OUT OF FOUR TRIES. ACCOUNT LOCKED.\n");         //Amended to say four tries//
	return 0;
}