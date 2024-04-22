#include <stdio.h>
#include <stdlib.h>

/*
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
*/

int main()
{
    int row, i, col, j, s;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    col = row;

    for (i=1; i<=row; i++)
    {
        for(s=1; s<=(i-1); s++)
        {
            printf("  ");
        }
        for (j=1; j<=(col-i+1); j++)
        {
            printf("%d ", j);
        }
        printf("\n");

    }

    return 0;
}
