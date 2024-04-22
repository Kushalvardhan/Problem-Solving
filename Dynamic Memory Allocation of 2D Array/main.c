#include <stdio.h>
#include <stdlib.h>

void write_output(int **arr, int row, int col);

int main()
{
    int **arr, row, col;
    int i, j, k;

    printf("Enter Number of Rows : ");
    scanf("%d", &row);

    printf("Enter number of Columns : ");
    scanf("%d", &col);

    arr = (int **)malloc(row*sizeof(int *));

    for(k=0; k<row; ++k)
    {
        *(arr+k) = (int *)malloc(col*sizeof(int));
    }

    //Taking Input

    for(i=0; i<row; ++i)
    {
        for(j=0; j<col; ++j)
        {
            scanf("%d", (*(arr+i)+j));
        }
    }
    printf("\n");

    write_output(arr, row, col);

    return 0;
}

void write_output(int **arr, int row, int col)
{
    int i, j;

    printf("Your 2D Array is : \n");

    for(i=0; i<row; ++i)
    {
        for(j=0; j<col; ++j)
        {
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
}
