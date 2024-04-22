#include <stdio.h>
#include <stdlib.h>
#define MAX_ROW 10
#define MAX_COL 10

void input_arr(int arr[][MAX_COL], int m, int n);
void compute(int a[][MAX_COL], int b[][MAX_COL], int c[][MAX_COL], int m, int n);
void print_arr(int c[][MAX_COL], int m, int n);

int main()
{

    int a[MAX_ROW][MAX_COL], b[MAX_ROW][MAX_COL], c[MAX_ROW][MAX_COL];
    int nrow, ncol;
    int row, col;
    printf("Enter number of rows : ");
    scanf("%d", &nrow);
    printf("Enter number of colums : ");
    scanf("%d", &ncol);

    printf("Enter Values for Matrix A :\n");
    input_arr(a, nrow, ncol);

    printf("Enter Values for Matrix B :\n");
    input_arr(b, nrow, ncol);

    printf("The Resultant Matrix is :\n");
    compute(a, b, c, nrow, ncol);

    print_arr(c, nrow, ncol);
}

void input_arr(int arr[][MAX_COL], int m, int n)
{
    int i, j;

    for (i=0; i< m; ++i)
    {
        //printf("\nEnter Array Elements for row %d :\n", i+1);
        for (j=0; j< n; ++j)
        {
            scanf("%d", &arr[i][j]);
        }

    }
    return;
}

void compute(int a[][MAX_COL], int b[][MAX_COL], int c[][MAX_COL], int m, int n)
{
    int row, col;

    for (row=0; row < m; row++)
    {
        for(col=0; col < n; col++)
        {
            c[row][col] = a[row][col] + b[row][col];
        }
    }
    return;
}

void print_arr(int c[][MAX_COL], int m, int n)
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
