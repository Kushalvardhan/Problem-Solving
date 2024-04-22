#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    int limit;

    printf("Up to? : ");
    scanf("%d", &limit);

    for (i=1; i<=limit; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    return 0;
}
