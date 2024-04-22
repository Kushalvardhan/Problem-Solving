#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i=l, j=h;

    while(i<j)
    {
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);

        if(i<j) swap(&arr[i], &arr[j]);
    }
    swap(&arr[l], &arr[j]);
    return j;
}

void quick_sort(int arr[], int l, int h)
{
    int j;
    if(l<h)
    {
        j = partition(arr, l, h);
        quick_sort(arr, l, j);
        quick_sort(arr, j+1, h);
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

int main(){
    int arr[] = {11,13,7,12,16,9,24,5,10,3};
    //int arr[] = {10, 80, 30, 90, 40, 50, 70};
    //int arr[] = {899, 456, 345, 102, 90, 58, 56, 34, 12};
    int length = sizeof(arr)/sizeof(int);

    quick_sort(arr, 0, length);
    display(arr, length);

    return 0;
}
