#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, dnum, rem, fact, sum, i;

    printf("Enter a number : ");
    scanf("%d", &num);

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
    {
        printf("Strong Number\n ");
    }
    else
    {
        printf("Not strong\n ");
    }


    return 0;
}
