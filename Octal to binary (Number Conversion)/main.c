#include <stdio.h>
#include <stdlib.h>
long long int binary(int oct)
{
    int n, sum=0, p=1;
    int binconst[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long int bin=0;

    while(oct)
    {
        n = oct%10;
        bin = bin+(binconst[n]*p);
        oct=oct/10;
        p=p*1000;
    }

    return bin;
}
int main()
{
    int oct;

    printf("Enter your Octal number : ");
    scanf("%d", &oct);

    printf("Binary equivalent is : %lld", binary(oct));

    return 0;
}
