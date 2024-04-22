#include <stdio.h>
#include <stdlib.h>

int add(int n);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Sum of first %d nonnegative integers is : %d", num, add(num));

    return 0;
}

int add(int n)
{
    if(n==0)
        return 0;
    else
        return n+add(n-1);
}
