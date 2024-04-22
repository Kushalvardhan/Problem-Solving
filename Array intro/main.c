#include <stdio.h>

int main()
{
    int i;
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];

    printf("Array ");

    for (i=0; i<5; ++i)
    {
        arr2[i] = arr1[i];
    }

    for (i=0; i<5; ++i)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
