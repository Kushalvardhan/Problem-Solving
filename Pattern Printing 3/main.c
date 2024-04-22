#include <stdio.h>
#include <stdlib.h>

/*

# # # # #
# # # #
# # #
# #
#

*/

int main()
{
    int row, i, col, j;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= (row - i + 1); j++)
        {
            printf("$ ");

        }
        printf("\n");
    }

    return 0;
}
