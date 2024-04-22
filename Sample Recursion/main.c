#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    int result;
    printf("The Function Called With value : %d\n", num);
    if (num==1)
        return 1;
    else
        result = num * factorial(num-1);
        printf("The intermediate values are %d * factorial(%d) : %d\n", num, num-1, result);
        return result;
}

int main()
{
    factorial(5);
    return 0;
}
