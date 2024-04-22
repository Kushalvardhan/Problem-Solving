#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr);
int linears(struct array *arr, int num);

int main()
{
    int num;
    int c = 1;
    struct array arr = {{2, 3, 8, 4, 9, 1, 0, 5, 6, 7}, 20, 10};
    display(arr);

    printf("\n");

    while(c==1)
    {
        printf("\nEnter the element to be searched : ");
        scanf("%d", &num);
        printf("%d appeared at index : %d\n", num, linears(&arr, num));
        printf("\n");
        printf("Enter 1 to search again : ");
        scanf("%d", &c);
    }

    printf("\n");

    display(arr);
}

void display(struct array arr)
{
    printf("The elements are : ");
    for(int i=0; i<arr.length; ++i)
    {
        printf("%d ", arr.A[i]);
    }
}

int linears(struct array *arr, int num)
{
    for(int i=0; i<arr->length; ++i)
    {
        if(arr->A[i]==num)
        {
            if(i>=1)
            {
                swap(&arr->A[i], &arr->A[i-1]);
            }
            return i;
        }
    }
    return -1;
}

int swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
