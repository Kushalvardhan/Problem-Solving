#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, size, value, pos;

    printf("Enter number of elements  : ");
    scanf("%d", &size);
    printf("Enter array elements : ");

    for (i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete : ");
    scanf("%d", &pos);
    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d\n", size);
    }
    else
    {
        for (i=pos; i<size; ++i)
        {
            arr[i-1] = arr[i];
        }

        size--;

        for (i=0; i<size; ++i)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
