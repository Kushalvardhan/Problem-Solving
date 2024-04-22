#include <stdio.h>
#include <stdlib.h>

int fibarr[80];

int memoization(int n);

int main()
{
    int n, i;

    printf("Which Fibonacci term do you want? : ");
    scanf("%d", &n);

    for(i=0; i<n; ++i)
    {
        fibarr[i] = -1;
    }

    printf("\nThe %dth Fibonacci term is : '%d'\n", n, memoization(n));

    return 0;
}

int memoization(int n)
{
    if(n<=1)
    {
        fibarr[n] = n;
        return n;
    }
    else
    {
        if(fibarr[n-2]==-1)
            fibarr[n-2] = memoization(n-2);
        if(fibarr[n-1]==-1)
            fibarr[n-1] = memoization(n-1);

        fibarr[n] = fibarr[n-2]+fibarr[n-1];
        return fibarr[n-2] + fibarr[n-1];
    }
}
