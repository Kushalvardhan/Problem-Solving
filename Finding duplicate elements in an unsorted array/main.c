#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int length;
};

int main()
{
    struct array arr = {{8, 7, 9, 2, 4, 8, 8, 2, 1, 4}, 10};
    int i, j, count;

    for(i=0; i<arr.length; ++i)
    {
        count = 1;
        if(arr.A[i]!=-1)
        {
            for(j=i+1; j<arr.length; ++j)
            {
                if(arr.A[i]==arr.A[j])
                {
                    count++;
                    arr.A[j]=-1;
                }
            }
        }
        if(count>1) printf("%d Appeared %d times\n", arr.A[i], count);
    }
    return 0;
}

