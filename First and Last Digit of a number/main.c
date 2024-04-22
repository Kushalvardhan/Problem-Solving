#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*This program doesnot work for 0*/

int main()
{
    long long int num;
    int length, firstdigi, lastdigi;

    printf("Enter your number : ");
    scanf("%d", &num);

    lastdigi = num%10;
    length = (int)log10(num);
    firstdigi = (int)(num/pow(10, length));

    printf("First and Last Digits are %d and %d", firstdigi, lastdigi);

    return 0;
}
