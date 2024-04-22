#include <stdio.h>
#include <stdlib.h>
# include<time.h>

int main()
{
    int x, y, z;

    srand(time(NULL));

    x = rand();
    y = rand();
    z = rand();

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}


