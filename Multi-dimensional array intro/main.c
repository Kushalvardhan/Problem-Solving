#include <stdio.h>

int main()
{
    int arr[10][10];
    int nrow, ncol;
    int i, j;
    printf("Enter number of rows : ");
    scanf("%d", &nrow);
    printf("Enter number of colums : ");
    scanf("%d", &ncol);

    printf("Enter array Elements :\n");
    for (i=0; i<nrow; ++i)
    {
        for (j=0; j<ncol; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i=0; i<nrow; ++i)
    {
        for (j=0; j<ncol; ++j)
        {
            printf("\t%2d", arr[i][j]);
        }
        printf("\n");
    }


}
