#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter an year : ");
    scanf("%d", &year);

    (year%4 == 0 && year%100 != 0)? printf("Leap Year") : (year%400 == 0)? printf("Leap Year") : printf("Common Year");

    return 0;
}
