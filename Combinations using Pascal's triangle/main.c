#include <stdio.h>
#include <stdlib.h>

int ncr(int n, int r);

int main()
{
    int n, r;

    printf("Enter n and c to find nCr : ");
    scanf("%d %d", &n, &r); //r must be less than or equal to n

    printf("\n %dC%d is : %d\n", n, r, ncr(n, r));

    return 0;
}

int ncr(int n, int r)
{
    if(r==0 || n==r)
        return 1;
    else
        return ncr(n-1, r-1) + ncr(n-1, r);
}
