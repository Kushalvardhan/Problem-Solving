#include <stdio.h>
#include <stdlib.h>
#define MAXROW 10
#define MAXCOL 10

void input_arr(int arr[][MAXCOL], int m, int n);
void print_arr(int c[][MAXCOL], int m, int n);

int main()
{
    int a[MAXROW][MAXCOL], b[MAXROW][MAXCOL], c[MAXROW][MAXCOL];
    int a_row, a_col, b_row, b_col, c_row, c_col;
    int i, j, k, sum;

    printf("Enter Number of Rows in MATRIX A : ");
    scanf("%d", &a_row);
    printf("Enter Number of Colums in MATRIX A : ");
    scanf("%d", &a_col);
    printf("Enter Number of Rows in MATRIX B : ");
    scanf("%d", &b_row);
    printf("Enter Number of Colums in MATRIX B : ");
    scanf("%d", &b_col);

    if (a_col != b_row)
    {
        printf("\nThese two matrices are not Compatable \n");
    }
    else
    {
        printf("Enter elements in MATRIX A :\n");
        input_arr(a, a_row, a_col);

        printf("Enter elements in MATRIX B :\n");
        input_arr(b, b_row, b_col);

        c_row = a_row;
        c_col = b_col;

        for (i=0; i<a_row; ++i)
        {
            for(j=0; j<b_col; ++j)
            {
                sum = 0;
                for (k=0; k<b_row; ++k)
                {
                    sum = sum + (a[i][k]*b[k][j]);
                }
                c[i][j] = sum;
            }
        }

        printf("The Resultant Array is :\n\n");
        print_arr(c, c_row, c_col);
    }


    return 0;
}

void input_arr(int arr[][MAXCOL], int m, int n)
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

void print_arr(int c[][MAXCOL], int m, int n)
{
    int i, j;

    for (i=0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
