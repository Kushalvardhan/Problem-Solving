#include <stdio.h>
#include <stdlib.h>

float horner(float x, float n)
{
    float s = 1;
    for (; n>0; n--)
    {
        s = 1 + (x/n)*s;
    }
    return s;
}

int main()
{
    float x, n;
    printf("Enter X : ");
    scanf("%f", &x);
    printf("Enter Exponent : ");
    scanf("%f", &n);

    printf("The sum of tailor series up to %d terms is : %.4f", n+1, horner(x, n));
    return 0;
}
