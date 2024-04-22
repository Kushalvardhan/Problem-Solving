#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1, var2;

    printf("Enter 1st number :\n");
    scanf("%d", &var1);

    printf("Enter 2nd number :\n");
    scanf("%d", &var2);

    switch(var1>var2)
    {
        case 0 : printf("The max is : %d\n", var2);
        break;
        case 1 : printf("The max is : %d\n", var1);
        break;
    }

    return 0;
}
