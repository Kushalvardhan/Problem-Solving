#include <stdio.h>
#include <stdlib.h>
# define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, j, size, count = 0;

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
                count++;
                break;
            }
        }
    }

    printf("Total number of Duplicate Terms : %d", count);

    return 0;
}
