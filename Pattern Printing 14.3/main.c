#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, col, j, k;
    int z=1, y=1;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    col = 2*row-1;

    for (i=1; i<=row; i++)
    {
        for (j=1; j<=row-i; j++)
        {
            printf("  ");
        }
        for (k=1; k<=z; k++)
        {
            printf("%c ", abs(k-y)+65);
        }
        y++;
        z+=2;
        printf("\n");
    }
    return 0;
}

