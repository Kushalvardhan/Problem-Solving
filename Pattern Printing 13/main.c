#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, col, j, count;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    col = row;
    count = 1;

    for (i=1; i<=row; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d ", count++);

        }
        printf("\n");

    }

    return 0;
}
