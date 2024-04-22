#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int n;
    printf("Enter your Number : ");
    scanf("%d", &n);

    printf("\n%d\n", factorial(n));

    return 0;
}
