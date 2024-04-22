#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hexa(long long int bin)
{
    int n, index=0;
    int hexconst[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    char hex[20];

    while (bin)
    {
        n = bin%10000;
        for (int i=0; i<16; ++i)
        {
            if (hexconst[i]==n)
            {
                if (i<10)
                {
                    hex[index] = (char)(48+i);
                }
                else
                {
                    hex[index] = (char)(65 + (i-10));
                }
                break;
            }
        }
        index++;
        bin = bin/10000;
    }
    hex[index] = '\0';
    strrev(hex);
    printf("Hexadecimal equivalent is : %s", hex);

    return 0;
}

int main()
{
    long long int bin;

    printf("Enter your Binary Number : ");
    scanf("%lld", &bin);

    hexa(bin);

    return 0;
}
