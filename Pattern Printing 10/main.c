#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, col, j, s;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    col = row;

    for (i=1; i<=row; i++)
    {
        for(s=1; s<=(col-i); s++)
        {
            printf("  ");
        }
        for (j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");

    }
    return 0;

}
