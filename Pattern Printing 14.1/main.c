#include <stdio.h>
#include <stdlib.h>

/*

        0
      1 0 1
    2 1 0 1 2
  3 2 1 0 1 2 3
4 3 2 1 0 1 2 3 4

*/

int main()
{
    int row, i, col, j;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    col = 2*row-1;

    for (i=1; i<=row; i++)
    {
        for (j=1; j<=col; j++)
        {
            if(j>=(row-i+1) && j<=row)
                printf("%d ", row-j);
            else if (j>=row && j<=(row+i-1))
                printf("%d ", j-row);
            else
                printf("  ");
        }
        printf("\n");

    }


    return 0;
}
