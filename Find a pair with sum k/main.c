#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int length;
    int min;
    int max;
};

int main()
{
    int i, j, *table, k=10; //k is sum
    struct array arr = {{6, 3, 8, 10, 16, 7, 5, 2, 9, 14}, 10, 0, 0};

    minmax(&arr);

    table = (int *)malloc(sizeof(arr.max+1));

    for(j=0; j<arr.max+1; ++j)
    {
        *(table+j) = 0;
    }

    for(i=0; i<arr.length; ++i)
    {
        if(table[k-arr.A[i]]!=0 && arr.A[i]<=k)
        {
            printf("%d, %d\n", arr.A[i], k-arr.A[i]);
        }
        table[arr.A[i]]++;
    }
    return 0;
}

void minmax(struct array *arr)
{
    arr->min = arr->A[0];
    arr->max = arr->A[0];

    for(int i=0; i<arr->length; ++i)
    {
        if(arr->A[i]>arr->max)
        {
            arr->max = arr->A[i];
        }
        else if(arr->A[i]<arr->min)
        {
            arr->min = arr->A[i];
        }
    }
}
