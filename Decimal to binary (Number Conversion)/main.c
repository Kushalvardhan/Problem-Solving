#include <stdio.h>
#include <stdlib.h>

long long int bin(int deci){
    int p=1, sum=0;

    while(deci){
        sum = sum + (deci%2)*p;
        deci = deci/2;
        p=p*10;
    }
    return sum;
}

int main()
{
    int deci;

    printf("Enter your Decimal Number : ");
    scanf("%d", &deci);

    printf("The Binary Equivalent of %d is : %lld", deci, bin(deci));

    return 0;
}
