#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rev;

    printf("Enter any number: ");
    scanf("%d", &num);

    rev = reverse(num);

    if (num == rev)
        printf("PALINDROME!");
    else
        printf("NOT PALINDROME!");

    return 0;
}

int reverse(num)
{
    int digit = (int) log10(num);

    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
