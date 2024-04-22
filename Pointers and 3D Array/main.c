#include <stdio.h>
#include <stdlib.h>
#define MAXHEIT 10
#define MAXROW 10
#define MAXCOL 10

void input_arr(int a[][MAXROW][MAXCOL], int heit, int row, int col);

int main()
{
    int arr[MAXHEIT][MAXROW][MAXCOL];
    int nrow, ncol, nheit;
    int i, j, k;

    printf("Enter Height : ");
    scanf("%d", &nheit);
    printf("Enter Number of rows : ");
    scanf("%d", &nrow);
    printf("Enter Number of columns : ");
    scanf("%d", &ncol);

    input_arr(arr, nheit, nrow, ncol);

    for (i=0; i<nheit; ++i)
    {
        for (j=0; j<nrow; ++j)
        {
            for (k=0; k<ncol; ++k)
            {
                printf("%d ", *(*(*(arr+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n\n");
    }

    return 0;
}

void input_arr(int a[][MAXROW][MAXCOL], int heit, int row, int col)
{
    int i, j, k;

    for (i=0; i<heit; ++i)
    {
        printf("Enter Values of Table %d\n\n", i+1);
        for (j=0; j<row; ++j)
        {
            printf("Enter Values of row %d\n\n", j+1);
            for (k=0; k<col; ++k)
            {
                scanf("%d", (*(*(a+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n \n");
    }
    return;
}
