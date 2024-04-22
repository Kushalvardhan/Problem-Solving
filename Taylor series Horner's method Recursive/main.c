#include <stdio.h>
#include <stdlib.h>

float horner(float x, float n)
{
    static float s = 1;
    int r;
    if (n==0)
        return s;
    else
    {
        s = 1+(x/n)*s;
        return horner(x, n-1);
    }
}

int main()
{
    int x, n;
    printf("Enter X : ");
    scanf("%d", &x);
    printf("Enter Exponent : ");
    scanf("%d", &n);

    printf("The sum of tailor series up to %d terms is : %.4f", n+1, horner(x, n));
    return 0;
}
