#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, dnum, rem, swap;
    printf("Enter a number : ");
    scanf("%d", &num);
    swap = 0;
    dnum = num;
    while (num)
    {
        rem = num%10;
        swap = swap*10;
        swap = swap + rem;
        num = num/10;
    }
    if (swap == dnum)
    {
        printf("Your number %d is palindrome\n", dnum);
    }
    else
    {
        printf("Your number %d is not palindrome\n", dnum);
    }
    return 0;
}
