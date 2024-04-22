#include <stdio.h>
#include <stdlib.h>

//Functions for both sorted and unsorted arrays are given.

struct array
{
    int A[10];
    int size;
    int length;
};

struct array* sorted_union(struct array *arr1, struct array *arr2);
struct array* sorted_intersection(struct array *arr1, struct array *arr2);
struct array* sorted_difference(struct array *arr1, struct array *arr2);
struct array* unsort_union(struct array *arr1, struct array *arr2);
struct array* unsort_intersect(struct array *arr1, struct array *arr2);
struct array* unsort_difference(struct array *arr1, struct array *arr2);

void display(struct array arr);

int main()
{
    struct array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct array arr2 = {{3, 6, 7, 15, 20}, 10, 5};
    struct array *arr3;

    arr3 = sorted_union(&arr1, &arr2);

    display(*arr3);

    return 0;
}

struct array* sorted_union(struct array *arr1, struct array *arr2)
{
    int i, j, k;
    i=j=k=0;

    struct array *arr3 = (struct array *)malloc(sizeof(struct array));

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    while(i<arr1->length)
    {
        arr3->A[k++] = arr1->A[i++];
    }
    while(j<arr2->length)
    {
        arr3->A[k++] = arr2->A[j++];
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;
};

struct array* sorted_intersection(struct array *arr1, struct array *arr2)
{
    int i, j, k;
    i=j=k=0;

    struct array *arr3 = (struct array *)malloc(sizeof(struct array));

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
            i++;

        else if (arr2->A[j] < arr1->A[i])
            j++;
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
};

struct array* sorted_difference(struct array *arr1, struct array *arr2)
{
    int i, j, k;
    i=j=k=0;

    struct array *arr3 = (struct array *)malloc(sizeof(struct array));

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    while(i<arr1->length)
    {
        arr3->A[k++] = arr1->A[i++];
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;
};

struct array* unsort_union(struct array *arr1, struct array *arr2)
{
    int i, j, k, c;
    i=j=0;
    k = arr1->length;

    struct array *arr3 = (struct array *)malloc(sizeof(struct array));

    for(i=0; i<arr1->length; ++i)
    {
        arr3->A[i] = arr1->A[i];
    }

    for(j=0; j<arr2->length; ++j)
    {
        c=0;
        for(i=0; i<arr1->length; ++i)
        {
            if(arr2->A[j] == arr1->A[i])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            arr3->A[k++] = arr2->A[j];
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;

};

struct array* unsort_intersect(struct array *arr1, struct array *arr2)
{
    int i, j, k;
    i=j=k=0;

    struct array *arr3 = (struct array *)malloc(sizeof(struct array));

    for(i=0; i<arr1->length; ++i)
    {
        for(j=0; j<arr2->length; ++j)
        {
            if(arr1->A[i] == arr2->A[j])
            {
                arr3->A[k++] = arr1->A[i];
            }
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
};

struct array* unsort_difference(struct array *arr1, struct array *arr2)
{
    int i, j, k, c;
    i=j=k=c=0;

    struct array *arr3 = (struct array *)malloc(sizeof(struct array));

    for(i=0; i<arr1->length; ++i)
    {
        c=0;
        for(j=0; j<arr2->length; ++j)
        {
            if(arr1->A[i] == arr2->A[j])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            arr3->A[k++] = arr1->A[i];
        }
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;

};

void display(struct array arr)
{
    for(int i=0; i<arr.length; ++i)
    {
        printf("%d ", arr.A[i]);
    }
}

