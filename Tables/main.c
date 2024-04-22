#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, j;

    printf("Which table do you want : ");
    scanf("%d", &x);

    printf("Up tom how many terms : ");
    scanf("%d", &y);

    for(i=1; i<=y; ++i)
    {
        printf("%d X %d = %d\n", x, i, x*i);
    }
}
