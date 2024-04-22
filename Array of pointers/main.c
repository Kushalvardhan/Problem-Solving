#include <stdio.h>
#include <stdlib.h>
#define MAXROW 10

void take_input(int *a[MAXROW], int m, int n);
void compute(int *a[MAXROW], int *b[MAXROW], int *c[MAXROW], int m, int n);
void write_output(int *a[MAXROW], int m, int n);

int main()
{
    int *a[MAXROW], *b[MAXROW], *c[MAXROW];
    int n_rows, n_cols, i;

    printf("Enter Number of ROWS : ");
    scanf("%d", &n_rows);
    printf("Enter Number of COLOUMNS : ");
    scanf("%d", &n_cols);

    for(i=0; i<n_rows; ++i)
    {
        a[i] = (int*)malloc(n_cols*sizeof(int));
        b[i] = (int*)malloc(n_cols*sizeof(int));
        c[i] = (int*)malloc(n_cols*sizeof(int));
    }

    printf("Enter Values for MATRIX A : \n");
    take_input(a, n_rows, n_cols);

    printf("Enter Values for MATRIX B : \n");
    take_input(b, n_rows, n_cols);

    compute(a, b, c, n_rows, n_cols);

    printf("\n");

    write_output(c, n_rows, n_cols);
    return 0;
}

void take_input(int *a[MAXROW], int m, int n)
{
    int row, col;

    for (row=0; row<m; row++)
    {
        for (col=0; col<n; col++)
        {
            scanf("%d", (a[row]+col));
        }
    }
    return;
}

void compute(int *a[MAXROW], int *b[MAXROW], int *c[MAXROW], int m, int n)
{
    int row, col;

    for (row = 0; row<m; row++)
    {
        for (col = 0; col<n; col++)
        {
            *(c[row]+col) = *(a[row]+col) + *(b[row]+col);
        }
    }
    return;
}

void write_output(int *a[MAXROW], int m, int n)
{
    int row, col;

    for (row=0; row<m; row++)
    {
        for (col=0; col<n; col++)
        {
            printf("%4d ", *(a[row]+col));
        }
        printf("\n");
    }
    return;
}
