#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter array Elements : ");
    for (i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (i=0; i<size; i++)
    {
        for (j=i+1; j<size; j++)
        {
            if (arr[i] == arr[j])
            {
                freq[i] = 0;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = 1;
            count++;

        }
    }

    printf("\nThere are %d unique elements\n", count);
    printf("The Unique Elements are : ");
    for (i=0; i<size; i++)
    {
        if (freq[i] == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}
