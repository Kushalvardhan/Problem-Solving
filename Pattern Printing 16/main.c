#include <stdio.h>
#include <stdlib.h>

/*

    *
   * *
  * * *
 * * * *
* * * * *

*/

int main()
{
    int row, i, col, j, s;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    col = 2*row-1;

    for (i=1; i<=row; i++)
    {
        for (s=1; s<=(row-i); s++)
        {
            printf(" ");
        }
        for (j=1; j<=(2*i-1); j++)
        {
            if(j%2==0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");

    }
    return 0;
}
