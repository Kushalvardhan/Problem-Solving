#include <stdio.h>
#include <stdlib.h>

int armstrong(int number);
int strong(int number);

int main()
{
    int num;
    printf("Enter a number to check : ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("It is an Armstrong number\n");
    else
        printf("It is Not Armstrong number\n");

    if (strong(num))
        printf("It is a Strong number\n");
    else
        printf("It is Not a Strong number\n");

    return 0;
}

int armstrong(int number)
{

    int num, dnum, digits, rem, sum;
    sum = 0;

    num = number;
    dnum = number;

    digits = (int)(log10(num)+1);

    while (num)
    {
        rem = num%10;
        sum = sum + pow(rem, digits);
        num = num/10;
    }

    if (dnum == sum)
        return 1;
    else
        return 0;
}

int strong(int number)
{

    int num, dnum, rem, fact, sum, i;

    num = number;
    sum = 0;
    dnum = num;

    while (num)
    {
        rem = num%10;
        fact = 1;

        for (i=1; i<= rem; i++)
        {
            fact = fact*i;
        }

        sum = sum + fact;
        num = num/10;

    }

    if (dnum == sum)
        return 1;
    else
        return 0;
}
