#include <stdio.h>
#include <stdlib.h>
#define MAXROW 10
#define MAXCOL 10

void input_arr(int arr[][MAXCOL], int m, int n);
void compute (int arr[][MAXCOL], int scalar, int m, int n);
void print_arr(int arr[][MAXCOL], int m, int n);

int main()
{
    int arr[MAXROW][MAXCOL];
    int scalar;
    int nrow, ncol;

    printf("Enter number of Rows : ");
    scanf("%d", &nrow);
    printf("Enter number of Colums : ");
    scanf("%d", &ncol);

    printf("Enter array elements :\n");
    input_arr(arr, nrow, ncol);

    printf("Enter the value of Scalar : ");
    scanf("%d", &scalar);

    compute(arr, scalar, nrow, ncol);

    print_arr(arr, nrow, ncol);

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

void compute (int arr[][MAXCOL], int scalar, int m, int n)
{
    int i, j;

    for (i=0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
        {
            arr[i][j] = (scalar * arr[i][j]);
        }
    }
    return;
}

void print_arr(int arr[][MAXCOL], int m, int n)
{
    int i, j;

    for (i=0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return;
}
