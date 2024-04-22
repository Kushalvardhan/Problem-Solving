#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int secmax(int arr[], int size);

int main()
{
    int i, n;
    int arr[MAX_SIZE];

    printf("Enter number of elements  : ");
    scanf("%d", &n);
    printf("Enter array elements : ");

    for (i=0; i<n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("The Second Largest is : %d\n", secmax(arr, n));

    return 0;
}

int secmax(int arr[], int size)
{
    int i;
    int max1, max2;
    max1 = max2 = INT_MIN;

    for (i=0; i<size; ++i)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if ((arr[i] > max2) && (arr[i] < max1))
        {
            max2 = arr[i];
        }
    }

    return max2;
}
