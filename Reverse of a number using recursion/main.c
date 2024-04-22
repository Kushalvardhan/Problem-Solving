#include <stdio.h>
#include <stdlib.h>

int reverse(int sum, int n);
int sum = 0;
int rem;

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("The reverse of %d is : %d", num, reverse(0, num));

    return 0;
}

int reverse(int sum, int n)
{
    if (n<=9)
        return sum+n;
    else
    {
        rem = n%10;
        sum = sum + rem;
        return reverse(sum*10, n/10);

    }
}
