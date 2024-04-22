#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("The sum of digits of %d is : %d", num, sum(num));

    return 0;
}

int sum(int n)
{
    if (n==0)
        return 0;
    else
        return ((n%10) + sum(n/10));

}
