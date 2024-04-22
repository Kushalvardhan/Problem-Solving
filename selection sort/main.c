#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void select_sort(int *arr, int n)
{
    int i, j, min_idx;

    for(i=0; i<n-1; ++i)
    {
        min_idx = i;

        for(j=i+1; j<n; ++j)
        {
            if(arr[j]<arr[min_idx])
                min_idx = j;
        }
        swap(&arr[i], &arr[min_idx]);
    }
}
int main()
{
    int i, n, *arr;

    printf("Enter size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int)*n);

    printf("Enter all elements : ");

    for(i=0; i<n; ++i)
        scanf("%d", &arr[i]);

    select_sort(arr, n);

    for(i=0; i<n; ++i)
        printf("%d ", arr[i]);

    return 0;
}
