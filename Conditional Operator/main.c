#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1, var2, var3;

    printf("Enter three values : ");
    scanf("%d%d%d", &var1, &var2, &var3);

    int max = (var1>var2 && var1>var3)? var1 : (var2 > var3)? var2 : var3;
    printf("The max num is %d", max);

    return 0;
}
