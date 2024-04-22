#include <stdio.h>
#include <stdlib.h>
// we described 2 methods
int main()
{
    int first, second, third, n, i;

    printf("Enter upper bound : ");
    scanf("%d", &n);

    first = 0;
    second = 1;

    if (n == 1)
    {
        printf("%d ", first);
    }
    else
    {
        printf("%d ", first);
        printf("%d ", second);

        for (i = 1; i <= (n-2); i++)
        {
            third = first + second;
            printf("%d ", third);

            first = second;
            second = third;
        }
    }

    return 0;
}

//2nd method.

/*
int main()
{
    int a, b, c, i, terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current to n-1
        c = a + b; // New term
    }

    return 0;
}

*/
