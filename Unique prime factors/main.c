#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, isprime, i, j;
    printf("Enter a number to know it's unique prime factors : ");
    scanf("%d", &num);

    for (i= 2; i<num; i++)
    {
        if (num % i == 0)
        {
            isprime = 1;

            for(j=2; j<i; j++)
            {
                if (i%j == 0)
                {
                isprime = 0;
                break;
                }
            }

            if (isprime == 1)
            {
            printf("%d ", i);
            }
        }
    }
    return 0;
}
