#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int n)
{
    int i, j, min_index, temp;
    for(i=0; i<n-1; ++i)
    {
        j = i+1;
        min_index = i;
        while(j<n)
        {
            if(arr[j]<arr[min_index])
                min_index = j;
            j++;
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
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
    int arr[] = {1, 90, 34, 29, 45, 12, 2, 3, 78, -3, -78};
    int length = sizeof(arr)/sizeof(int);

    selection_sort(arr, length);
    display(arr, length);
}
