#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void printarr(int arr[], int start, int end);

int main()
{
    int i, n;
    int arr[MAX_SIZE];

    printf("Enter number of array elements : ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for (i=0; i<n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array Elements are : ");
    printarr(arr, 0, n);

    return 0;
}

void printarr(int arr[], int start, int end)
{
    if (start >= end)
        return;
    else
        printf("%d ", arr[start]);

    printarr(arr, start+1, end);
}
