#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int num;
    int firstdigi;

    printf("Enter your number : ");
    scanf("%d", &num);

    while(num >= 10)
    {
        num = num / 10;
    }

    firstdigi = num;

    printf("First digit : %d\n", firstdigi);

    return 0;
}
