#include <stdio.h>
#include <stdlib.h>
#define MAXROW 10
#define MAXCOL 10

void input_arr(int arr[][MAXCOL], int m, int n);
void compute(int arr[][MAXCOL], int m, int n);
void print_arr(int arr[][MAXCOL], int m, int n);

int main()
{
    int arr[MAXROW][MAXCOL];
    int nrow, ncol;
    int i, j;
    int sum = 0;

    printf("Enter number of Rows : ");
    scanf("%d", &nrow);
    printf("Enter number of Colums : ");
    scanf("%d", &ncol);

    printf("Enter Matrix elements :\n");
    input_arr(arr, nrow, ncol);

    compute(arr, nrow, ncol);

    printf("The Diagonals Interchanged Matrix is : \n");
    print_arr(arr, nrow, ncol);

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

void compute(int arr[][MAXCOL], int m, int n)
{
    int i, size, temp;
    size = n;

    for (i=0; i<m; ++i)
    {
        temp = arr[i][i];
        arr[i][i] = arr[i][size-i-1];
        arr[i][size-i-1] = temp;
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
}

