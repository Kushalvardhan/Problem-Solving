#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, col, j, s;

    //printf("Enter number of rows : ");
    //scanf("%d", &row);
    row = 7;
    col = 2*row-1;

    for (i=row; i>=1; i--)
    {
        for (j=1; j<=col; j++)
        {
            if (j>=(row-i+1)&&j<=(row+i-1))
            {
                if ((i%2!=0)&&(j%2!=0))
                    printf("* ");
                else if ((i%2!=0)&&(j%2==0))
                    printf("  ");
                else if ((i%2==0)&&(j%2==0))
                    printf("* ");
                else
                    printf("  ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
