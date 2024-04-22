#include <stdio.h>
#include <stdlib.h>

int main()
{

    float c, f;
    printf("Enter temperature in celcius : ");
    scanf("%f", &c);

    f = (c*(9.0/5.0))+32;

    printf("Temperature in Fahrenheit : %.2f F\n", f);

    return 0;
}


