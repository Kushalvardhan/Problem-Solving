#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, k, x, count;
    int *arr;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int)*n);

    printf("Enter array elements : ");

    for(i=0; i<n; ++i)
        scanf("%d", &arr[i]);

    printf("Enter key : ");
    scanf("%d", &x);

    printf("Enter segment size : ");
    scanf("%d", &k);

    for(i=0; i<n; i+=k)
    {
        count = 0;
        for(j=i; j<i+k; ++j)
        {
            if(arr[j]==x)
            {
                count = 1;
                break;
            }
        }

        if(count == 0)
        {
            printf("NO");
            break;
        }
    }

    if(count == 1)
        printf("Yes");

    return 0;
}
