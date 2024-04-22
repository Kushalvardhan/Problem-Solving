#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[],int n)
{
    int i, j, temp, flag;
    for(i=0; i<n-1; ++i)
    {
        flag = 0;      //With this variable we are making the Bubble sort ADAPTIVE
        for(j=0; j<n-1-i; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag==0)
            return;//If no swaps in a whole pass, the list is sorted
    }
    return;
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
    int arr[] = {5, 8, 3, 2, 7};
    int length = sizeof(arr)/sizeof(int);

    bubble_sort(arr, length);
    display(arr, length);
}
