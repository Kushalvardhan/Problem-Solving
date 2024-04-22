#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days, years, months, weeks;

    printf("Enter no of days : ");
    scanf("%d", &days);

    years = (days/365);
    months = (days - (years * 365))/30;
    weeks = (days - ((years * 365)+(months * 30)))/7;
    days = (days - ((years*365)+(months * 30)+(weeks*7)));

    printf("YEARS : %d\n", years);
    printf("MONTHS : %d\n", months);
    printf("WEEKS : %d\n", weeks);
    printf("DAYS : %d\n", days);

    return 0;
}
