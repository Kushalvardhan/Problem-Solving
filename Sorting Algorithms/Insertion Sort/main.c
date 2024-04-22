#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n)
{
    int i, j, key;
    for(i=1; i<n; ++i)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    return 0;
}

void display(int arr[], int n)
{
    int i;
    for(i=0; i<n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5, 8, 3, 7, 9, 2};
    int length = sizeof(arr)/sizeof(int);

    insertion_sort(arr, length);
    display(arr, length);

    return 0;
}
