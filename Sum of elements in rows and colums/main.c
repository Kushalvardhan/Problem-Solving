#include <stdio.h>
#include <stdlib.h>
#define MAXCOL 10

// This program Works fine only for Square Matrix

void input_arr(int arr[][MAXCOL], int m, int n);

int main()
{
    int arr[10][10];
    int nrow, ncol;
    int i, j;
    int sum1, sum2;

    printf("Enter number of Rows : ");
    scanf("%d", &nrow);
    printf("Enter number of Colums : ");
    scanf("%d", &ncol);

    printf("Enter array elements :\n");
    input_arr(arr, nrow, ncol);

    for (i=0; i<nrow; ++i)
    {
        sum1 = 0;
        sum2 = 0;
        for(j=0; j<ncol; ++j)
        {
            sum1 = sum1 + arr[i][j];
            sum2 = sum2 + arr[j][i];
        }
        printf("\nSum of Elements of Row %d : %d\n", i+1, sum1);
        printf("\nSum of Elements of Column %d : %d\n", i+1, sum2);
    }
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

