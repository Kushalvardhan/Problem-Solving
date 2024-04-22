#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, sum;
    int arr[10] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    i=0;
    j=9;
    sum=10;

    while(i<j)
    {
        if(arr[i]+arr[j]==sum)
        {
            printf("%d, %d\n", arr[i], arr[j]);
            i++;
            j++;
        }
        else if(arr[i]+arr[j]>sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}
