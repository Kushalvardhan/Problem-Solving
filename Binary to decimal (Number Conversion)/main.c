#include <stdio.h>
#include <stdlib.h>

int convert(long long int bin)
{
    int sum = 0, p = 1;
    int n;

    while (bin)
    {
        n = bin%10;

        if (n<=1)
        {
            sum = sum + (n*p);
            p = p*2;
            bin = bin/10;
        }
        else
        {
            printf("The number is not in binary Format!!!");
            return -1;
        }

    }
    return sum;
}

int main()
{
    long long int bin;

    printf("Enter Number in Binary : ");
    scanf("%lld", &bin);

    if (convert(bin)!= -1)
    {
        printf("\nThe decimal equivalent of %lld is : %d\n", bin, convert(bin));
    }
    else
    {
        printf("\nNumbers other than 0 and 1 are present\n");
    }
    return 0;
}
