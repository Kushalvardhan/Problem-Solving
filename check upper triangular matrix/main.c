#include <stdio.h>
#include <stdlib.h>
#define MAXROW 10
#define MAXCOL 10

void input_arr(int arr[][MAXCOL], int m, int n);

int main()
{
    int arr[MAXROW][MAXCOL];
    int nrow, ncol;
    int i, j;
    int upper = 1;

    printf("Enter number of Rows : ");
    scanf("%d", &nrow);
    printf("Enter number of Colums : ");
    scanf("%d", &ncol);

    printf("Enter array elements :\n");
    input_arr(arr, nrow, ncol);

    for (i=0; i<nrow; ++i)
    {
        for (j=0; j<ncol; ++j)
        {
            if (i>j)
            {
                if (arr[i][j] != 0)
                {
                    upper = 0;
                    break;
                }
            }
        }
        if (upper == 0)
            break;
    }

    if (upper == 1)
        printf("\nThis is a Upper Triangular Matrix\n");
    else
        printf("\nThis is not an Upper Triangular Matrix\n");

    return 0;
}

void input_arr(int arr[][MAXCOL], int m, int n)
{
    int i, j;

    for (i=0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    return;
}

