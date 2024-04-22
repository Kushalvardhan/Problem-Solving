#include <stdio.h>
#include <stdlib.h>

/*

    *               //Try printing the same logic but replacing printf("* ") [star and space] with.
   * *
  * * *             //1) printf("%d", j)
 * * * *            //2) printf("%d", i)
* * * * *
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
//For Upper Pyramid
    for (i=1; i<=row; i++)
    {
        for (s=1; s<=(row-i); s++)
        {
            printf(" "); // just 1 space
        }
        for (j=1; j<=i; j++)
        {
            printf("* "); // star and space
        }
        printf("\n");
    }
//For lower Pyramid
    for (i=row-1; i>=1; i--)
    {
        for (s=1; s<=(row-i); s++)
        {
            printf(" "); // just 1 space
        }
        for (j=1; j<=i; j++)
        {
            printf("* "); //star and space
        }
        printf("\n");
    }
    return 0;
}
