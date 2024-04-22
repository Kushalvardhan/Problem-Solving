#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3] = {{0, 2, 3},{4, 0, 6}, {7, 8, 0}};
    int i, j;

    for (i=0; i<3; ++i)
    {
        for (j=0; j<3; ++j)
        {
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
    return 0;
}
