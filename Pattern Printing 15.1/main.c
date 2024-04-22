#include <stdio.h>
#include <stdlib.h>
/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/

int main()
{
    int row, i, col, j;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (i=row; i>=-row; i--)
    {
        for (j=1; j<=((row+1)-abs(i)); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
