#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int l, int mid, int h)
{
    int i, j, k;
    int b[h+1];
    i=l; j=mid+1; k=l;

    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    for(;i<=mid;++i)
        b[k++]=a[i];
    for(;j<=h;++j)
        b[k++]=a[j];

    for(i=l; i<=h; ++i) a[i] = b[i];
}

void merge_sort(int arr[], int l, int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid+1, h);

        merge(arr, l, mid, h);
    }
}

void display(int arr[], int n)
{
    for(int i=0; i<n; ++i)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {12, 7, 8, 3, 4, 1, 20, 5, 6};
    //int arr[] = {11,13,7,12,16,9,24,5,10,3};
    int n = sizeof(arr)/sizeof(int);

    merge_sort(arr, 0, n-1);
    display(arr, n);

    return 0;
}
