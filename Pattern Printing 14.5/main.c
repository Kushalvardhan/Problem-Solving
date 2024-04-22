#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, col, j;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    col = 2*row-1;

    for (i=1; i<=row; i++)
    {
        for (j=1;  j<=col; j++)
        {
            if (j>=(row-i+1)&&j<=(row+i-1))
                printf("%d ", abs(row-j)+1);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
