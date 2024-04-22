#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int main()
{
    int a, b;

    printf("Enter the value a and b : ");
    scanf("%d %d", &a, &b);

    printf("The GCD of %d and %d is : %d", a, b, gcd(a, b));

    return 0;
}

int gcd(int a, int b)
{
    if (b==0)
        return a;
    else
        return gcd(b, a%b);
}
