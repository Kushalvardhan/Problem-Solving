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
            printf("%d ", abs(k-y));
        }
        y++;
        z+=2;
        printf("\n");
    }
    return 0;
}
