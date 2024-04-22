#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, dnum, digits, rem, sum;
    sum = 0;

    printf("Enter a number to check : ");
    scanf("%d", &num);
    dnum = num;

    digits = (int)(log10(num)+1);

    while (num)
    {
        rem = num%10;
        sum = sum + pow(rem, digits);
        num = num/10;
    }

    if (dnum == sum)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not Armstrong number\n");
    }

    return 0;
}
