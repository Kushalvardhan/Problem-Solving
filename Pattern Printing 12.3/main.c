#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, col, j;
    char alpha;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    col = 2*row-1;
    alpha = 'A';

    for (i=1; i<=row; i++)
    {
        for (j=1; j<=col; j++)
        {
            if (j>=(row-i+1) && j<=(row+i-1))
                printf("%c ", alpha);
            else
                printf("  ");

        }
        printf("\n");
        alpha = alpha+2;

    }

    return 0;
}
