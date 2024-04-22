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

    printf("Enter the value to be inserted : ");
    scanf("%d", &value);
    printf("Enter the position (index starts from 0) : ");
    scanf("%d", &pos);

    for (i=size; i>pos; --i)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = value;
    size++;

    for (i=0; i<size; ++i)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
