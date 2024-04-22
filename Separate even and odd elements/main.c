#include <stdio.h>
#include <stdlib.h>

void printarray(int array[], int count);

int main()
{
    int arr[100], even[100], odd[100];
    int i, j, size;
    int evencount, oddcount;


    printf("Enter Size of array : ");
    scanf("%d", &size);
    printf("Enter array elements : ");

    for (j=0; j<size; ++j)
    {
        scanf("%d", &arr[j]);
    }

    printf("\n");

    evencount = 0;
    oddcount = 0;

    for (i=0; i<size; ++i)
    {
        if (arr[i]%2 == 0)
        {
            even[evencount] = arr[i];
            evencount++;
        }
        else
        {
            odd[oddcount] = arr[i];
            oddcount++;
        }
    }

    printf("The separated arrays are :\n");
    printf("Array of even numbers : ");
    printarray(even, evencount);
    printf("Array of odd numbers : ");
    printarray(odd, oddcount);

    return 0;
}

void printarray(int array[], int count)
{
    int i;

    for (i=0; i<count; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
