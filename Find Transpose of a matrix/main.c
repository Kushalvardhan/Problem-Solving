#include <stdio.h>
#include <stdlib.h>
#define MAXROW 10
#define MAXCOL 10

void input_arr(int arr[][MAXCOL], int m, int n);
void print_arr(int c[][MAXCOL], int m, int n);

int main()
{
    int arr1[MAXROW][MAXCOL], arr2[MAXCOL][MAXROW];
    int nrow, ncol;
    int i, j;

    printf("Enter number of Rows : ");
    scanf("%d", &nrow);
    printf("Enter number of Colums : ");
    scanf("%d", &ncol);

    printf("Enter array elements :\n");
    input_arr(arr1, nrow, ncol);

    for (i=0; i<nrow; ++i)
    {
        for (j=0; j<ncol; ++j)
        {
            arr2[j][i] = arr1[i][j];
        }
    }

    printf("The Transpose is :\n");
    print_arr(arr2, ncol, nrow);  // VERY IMPORTANT PART don't get confused with print_arr(arr2, nrow, ncol)
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

void print_arr(int c[][MAXCOL], int m, int n)
{
    int i, j;

    for (i=0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
