#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

int main()
{
    struct array arr = {{2, 3, 5, 7, 8}, 10, 5};
    printf("Returns '1' if array is sorted, else '0'.\n");
    printf("IsSorted?? : %d \n", isSorted(arr));

    return 0;
}

int isSorted(struct array arr)
{
    int i;
    for(i=0; i<arr.length-1; ++i)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}
