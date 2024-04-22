#include <stdio.h>
#include <stdlib.h>

/*
      3
    3 2
  3 2 1
3 2 1 0
  3 2 1
    3 2
      3
*/

int main()
{
    int row, i, col, j, s;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (i=row; i>=-row; i--)
    {
        for (s=1; s<=abs(i); s++)
        {
            printf("  ");
        }
        for (j=row; j>=abs(i); j--)
        {
            printf("%d ", j);
        }
        printf("\n");

    }
    return 0;
}
