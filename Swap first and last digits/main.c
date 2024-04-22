#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* This code does not work for '0' */

int main()
{
    int num, firstdigi, lastdigi, digits, swap;
    printf("Enter a number to swap : ");
    scanf("%d", &num);

    digits = (int)log10(num);
    firstdigi = (int)num/pow(10, digits);
    lastdigi = num%10;

    swap = num - (firstdigi*((int)pow(10, digits)));
    swap = swap + (lastdigi*((int)pow(10, digits)));
    swap = swap - lastdigi;
    swap = swap + firstdigi;

    printf("The Swapped number is : %d\n", swap);

    return 0;
}
