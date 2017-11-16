#include <stdio.h>

int main()
{
	float subject_1, subject_2, subject_3, subject_4;
	printf("*********************************************\n");
		printf("\n\t      *******    *     *");
		printf("\n\t           *     *    *");
		printf("\n\t         *       * * *");
		printf("\n\t        *        *  *");
		printf("\n\t       *         *   *");
		printf("\n\t      *******    *    *\n\n");
		printf("*********************************************\n");
		
		printf("\n\t      Subject 1:  ");
		scanf_s("%f", &subject_1);

		printf("\n\t      Subject 2:  ");
		scanf_s("%f", &subject_2);
		
		printf("\n\t      Subject 3:  ");
		scanf_s("%f", &subject_3);
		
		printf("\n\t      Subject 4:  ");
		scanf_s("%f", &subject_4);

		return 0;
}