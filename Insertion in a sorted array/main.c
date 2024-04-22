#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr, int length);
void insert(struct array *arr, int key);

int main()
{
    int key;
    struct array arr = {{2, 3, 5, 6, 8}, 10, 5};

    printf("Enter the element to be inserted : ");
    scanf("%d", &key);

    insert(&arr, key);

    display(arr, arr.length);
}

void display(struct array arr, int length)
{
    int i;
    for(i=0; i<length; ++i)
    {
        printf("%d ", arr.A[i]);
    }
}

void insert(struct array *arr, int key)
{
    int i=arr->length-1;

    if(arr->length == arr->size)
        return;
    while(i>=0 && arr->A[i]>key)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = key;
    arr->length++;
}
