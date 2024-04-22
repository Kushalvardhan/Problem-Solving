#include <stdio.h>
#include <stdlib.h>

//this is the Basic Idea Behind Iterative Merge Sort
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

int main()
{
    int l=0, mid=2, h=7;
    int arr[] = {3, 6, 7, 1, 4, 5, 8, 10};//3-7 is sorted and 1-10 are also sorted.
    merge(arr, l, mid, h);
    printf("This is the basic idea behind iterative Merge Sort\n");
    for(int i=0; i<=h; ++i)
        printf("%d ", arr[i]);
    printf("\n\n");

    return 0;
}
