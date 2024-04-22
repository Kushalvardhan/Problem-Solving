#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int sumarr(int arr[], int start, int end);

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

    printf("Sum of Array elements = %d\n", sumarr(arr, 0, n));

    return 0;
}

int sumarr(int arr[], int start, int end)
{
    if (start >= end)
        return 0;

    return (arr[start]+sumarr(arr, start+1, end));
}
