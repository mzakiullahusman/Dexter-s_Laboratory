#include <stdio.h>

void main()
{
    int row, col, space, limit = 0;
     do
    {

    printf("Enter the number of stars in top tier of inverse triangle: ");
    scanf("%d", &limit);
    printf("\n");


      for (row = 1; row <= limit; row++)
    {
        for (space = (row - 2); space >= 0; space--)
        {
            printf(" ");
        }
        for (col = row; col <= limit; col++)
        {
            printf("* ");
        }


        printf("\n");
    }
    printf("Do you want to build a triangle? -1 to end: ");
    scanf("%d", &limit);
    }
    while (limit != -1);

}
