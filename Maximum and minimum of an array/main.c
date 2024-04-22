#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void minmax(int arr[], int size);

int main()
{
    int arr[MAX_SIZE];
    int i, n;

    printf("Enter number of elements  : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for (i=0; i<n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("The Maximum and Minimum are : ");
    minmax(arr, n);

    return 0;
}

void minmax(int arr[], int size)
{
    int max = arr[0], min = arr[0];
    int i;

    for (i=0; i<size; ++i)
    {
        if (arr[i] >= max)
            max = arr[i];
        else if (arr[i] <= min)
            min = arr[i];
    }

    printf("\nMINIMUM = %d", min);
    printf("\nMAXIMUM = %d", max);
}
