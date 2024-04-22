#include <stdio.h>
#include <stdlib.h>

long long power(int base, int expo);

int main()
{
    int base, expo;

    printf("Enter Base : ");
    scanf("%d", &base);
    printf("Enter Exponent : ");
    scanf("%d", &expo);

    printf("%d power %d is : %lld", base, expo, power(base, expo));

    return 0;
}

long long power(int base, int expo)
{
    if (expo == 0)
        return 1;
    else
        return base * power(base, expo-1);
}
