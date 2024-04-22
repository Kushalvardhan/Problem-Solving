#include <stdio.h>
#include <stdlib.h>

long long int binary(int oct);

int main()
{
    int oct;
    long long int bin;

    printf("Enter your Octal Number : ");
    scanf("%d", &oct);

    hexadecimal(binary(oct));

    return 0;
}

long long int binary(int oct)
{
    int rem, i, sum, p=1;
    int binConst[] = {0, 1, 10, 11, 100, 101, 110, 111};

    while (oct)
    {
        rem = oct%10;
        sum = sum + (binConst[rem]*p);
        oct = oct/10;
        p = p*1000;
    }
    return sum;
}

void hexadecimal(long long int bin)
{
    int rem, sum=0, i, index=0;
    char hexConst[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int binConst[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    char hex[80];

    while (bin)
    {
        rem = bin%10000;
        for (i=0; i<16; ++i)
        {
            if(rem==binConst[i])
            {
                hex[index] = (char)hexConst[i];
                break;
            }
        }
        index++;
        bin = bin/10000;
    }
    hex[index]='\0';
    strrev(hex);
    printf("The HexaDecimal Equivalent is : %s", hex);
}
