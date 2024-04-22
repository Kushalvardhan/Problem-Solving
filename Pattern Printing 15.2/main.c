#include <stdio.h>
#include <stdlib.h>

/*

      *
    * *
  * * *
* * * *
  * * *
    * *
      *

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
        for (j=1; j<=(row+1)-abs(i); j++)
        {
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}
