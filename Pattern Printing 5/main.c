#include <stdio.h>
#include <stdlib.h>

/*

1
1 3
1 3 5
1 3 5 7
1 3 5 7 9

*/

int main()
{
    int row, i, col, j;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", ((2*j)-1));

        }
        printf("\n");

    }

    return 0;
}
