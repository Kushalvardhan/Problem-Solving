#include <stdio.h>
#include <stdlib.h>

int octal(int bin)
{
    int n, sum=0, p=1;
    int octarr[] = {0, 1, 10, 11, 100, 101, 110, 111};

    while (bin)
    {
        n = bin%1000;

        for (int i = 0; i<8; ++i)
        {
            if(octarr[i]==n)
            {
                sum = sum + i*p;
                break;
            }
        }
        bin = bin/1000;
        p = p*10;
    }
    return sum;
}

int main()
{
    int bin, oct;
    printf("Enter your Binary Number : ");
    scanf("%d", &bin);

    printf("The Octal Equivalent of %d is : %d", bin, octal(bin));
    return 0;
}
