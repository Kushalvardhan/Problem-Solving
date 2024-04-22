#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int num, dnum;
    int length;

    printf("Enter a number : ");
    scanf("%lld", &num);

    length = 0;
    dnum = num;

    do
    {
        length++;              /*USE LOGARITHM TO FIND NO OF DIGITS
                               FORMULA = (log(num)+1) logarithm to the base 10
                               */
        num = num/10;

    } while(num);

    printf("No of digits in %lld : %d\n", dnum, length);

    return 0;
}
