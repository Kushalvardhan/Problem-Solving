#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, diffr;
    int arr[10] = {3, 4, 5, 7, 8, 9, 13, 14, 15, 18};

    diffr = arr[0];

    printf("The missing elements are : ");

    for(i=0; i<10; ++i)
    {
        if(arr[i]-i != diffr)
        {
            while(diffr<arr[i]-i)
            {
                printf("%d ", diffr + i);
                diffr++;
            }
        }
    }
    return 0;
}
