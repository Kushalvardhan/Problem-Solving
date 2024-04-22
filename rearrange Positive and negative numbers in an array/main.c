#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void rearrange(struct array *arr);
void swap(int *x, int *y);
void display(struct array arr);

int main()
{
    struct array arr = {{-3, 4, 9, -1, 2, 6, -5, -6, 11, -12}, 10, 10};

    rearrange(&arr);

    printf("The Rearranged array is : ");

    display(arr);

    return 0;
}

void rearrange(struct array *arr)
{
    int i, j;
    i=0;
    j = arr->length-1;

    while(i<j)
    {
        while(arr->A[i]<0) i++;
        while(arr->A[j]>0) j--;
        if(i<j) swap(&arr->A[i], &arr->A[j]);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(struct array arr)
{
    int i;
    for(i=0; i<arr.length; ++i)
    {
        printf("%d ", arr.A[i]);
    }
}
