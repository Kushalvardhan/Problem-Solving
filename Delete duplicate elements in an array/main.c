#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int i, j, k, l, size, pos;

    printf("Enter number of elements  : ");
    scanf("%d", &size);
    printf("Enter array elements : ");

    for (i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0; i<size; ++i)
    {
        for (j=i+1; j<size; ++j)
        {
            if (arr[i] == arr[j])
            {
                for (k=j; k<size; ++k)
                {
                    arr[k] = arr[k+1];
                }

                size--;
                j--;
            }

        }
    }

    for (i=0; i<size; ++i)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
