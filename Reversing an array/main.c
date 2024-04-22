#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[5];
    int length;
};

void reverse1(struct array *arr);
void reverse2(struct array *arr);
void swap(int *x, int *y);
void display(struct array arr);

int main()
{
    struct array arr = {{2, 5, 7, 8, 9}, 5};

    reverse1(&arr);
    printf("The reversed array is : ");
    display(arr);

    return 0;
}

void reverse1(struct array *arr)  //Method 1
{
    int i, j;
    for(i=0,j=arr->length-1; i<=j; i++, j--)
        swap(&arr->A[i], &arr->A[j]);
}

void reverse2(struct array *arr)  //Method 2
{
    int *B;
    int i,j;

    B=(int *)malloc(arr->length*sizeof(int));

    for(i=arr->length-1,j=0;i>=0;i--,j++)
        B[j]=arr->A[i];

    for(i=0;i<arr->length;i++)
        arr->A[i]=B[i];
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
