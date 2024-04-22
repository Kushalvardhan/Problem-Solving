#include <stdio.h>
#include <stdlib.h>

float taylor(int x, int n)
{
    static float p=1, f=1;
    static int r;

    if (n==0)
        return (p/f);
    else
        r = taylor(x, n-1);
        p = p*x;
        f = f*n;
        return r+(p/f);
}

int main()
{
    int x, n;
    printf("Enter X : ");
    scanf("%d", &x);
    printf("Enter Exponent : ");
    scanf("%d", &n);

    printf("The sum of tailor series up to %d terms is : %.4f", n+1, taylor(x, n));
    return 0;
}
