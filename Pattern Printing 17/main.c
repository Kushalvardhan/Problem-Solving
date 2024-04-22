#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, col, j, s;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    //For Upper Pyramid

    for (i=1; i<=row; i++)
    {
        for (s=1; s<=(row-i); s++)
        {
            printf("  ");
        }
        for (j=1; j<=(2*i-1); j++)
        {
            printf("* ", j);
        }
        printf("\n");
    }

    //For lower Pyrimad

    for (i=row-1; i>=1; i--)
    {
        for (s=1; s<=(row-i); s++)
        {
            printf("  ");
        }
        for (j=1; j<=(2*i-1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
