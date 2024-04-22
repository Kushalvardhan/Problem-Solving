#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int min;
    int max;
    int length;
};

int main()
{
    int i;
    struct array arr = {{6, 11, 4, 2, 1, 9, 7, 3, 10, 15}, 0, 0, 10};

    minmax(&arr);

    printf("The missing elements are : ");

    int *table = (int *)malloc(sizeof(int)*arr.max+1);

    for(i=0; i<=arr.max; ++i)
    {
        *(table+i) = 0;
    }

    for(i=0; i<arr.length; ++i)
    {
        (*(table+arr.A[i]))++;
    }

    for(i=arr.min; i<=arr.max; ++i)
    {
        if(*(table+i)==0)
            printf("%d, ", i);
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
