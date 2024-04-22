#include <stdio.h>
#include <stdlib.h>

float taylor(const int x, int n)
{
    static int p = 5, f=1;
    static int r;

    if (n==1)
        return (p/f);
    else
        r = taylor(x, n-1);
        p = p*x;
        f = f*n;
        if (n%2!=0)
            return r + (p/f);
        else
            return r;
}

int main()
{
    const x, n;
    printf("Enter X : ");
    scanf("%d", &x);
    printf("Enter Exponent : ");
    scanf("%d", &n);

    printf("The sum of tailor series up to %d terms is : %.4f", n+1, taylor(x, n));
    return 0;
}
