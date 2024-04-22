#include <stdio.h>
#include <stdlib.h>

int fib(n);

int main()
{
    int n;
    printf("which term of Fibonacci series you want?? : ");
    scanf("%d", &n);

    printf("The %d th term of Fibonacci series is : %d", n, fib(n));

    return 0;
}


int fib(n)
{
    if(n==1)
        return 0;
    else if (n==2)
        return 1;
    else
        return (fib(n-2) + fib(n-1));

}
