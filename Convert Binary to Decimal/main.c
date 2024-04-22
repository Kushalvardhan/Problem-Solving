#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long bin;
    int isbin, n, sum, rem;

    printf("Enter a number in binary format : ");
    scanf("%lld", &bin);
    sum = 0;
    n = 0;
    isbin = 1;
    while (bin)
    {
        rem = bin % 10;

        if ((rem == 0) || (rem == 1))
        {
            sum = sum + (pow(2, n)*rem);
            bin = bin/10;
            n++;
        }
        else
        {
            printf("You have entered invalid number\n");
            isbin = 0;
            break;
        }
    }

    if (isbin == 1)
    {
        printf("Decimal number is : %d\n", sum);
    }

    return 0;
}
