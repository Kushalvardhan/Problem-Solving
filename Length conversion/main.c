#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length, meter, km;

    printf("Enter length in centimeters : ");
    scanf("%f", &length);

    meter = length/100.0;
    km = meter/1000.0;

    printf("Length in Meters = %.2f M \n", meter);
    printf("Length in Kilo Meters = %.3f KM\n", km);

    return 0;
}
