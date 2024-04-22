#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int length;
};

int main()
{
    int i, j, lastdupli=0;
    struct array arr = {{2, 3, 4, 4, 5, 7, 8, 8, 8, 9}, 10};

    for(int i=0; i<arr.length-1; ++i)
    {
        if(arr.A[i] == arr.A[i+1])
        {
            j=i+1;
            while(arr.A[j]==arr.A[i]) j++;
            printf("%d Appered %d times\n", arr.A[i], j-i);
            i=j-1;
        }
    }
    return 0;
}
