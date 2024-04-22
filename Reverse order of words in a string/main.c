#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100], reverse[100];
    int strind, revind, pivot;
    int i, end, prevind;

    printf("Enter your line : ");
    gets(str);

    i = 0;
    while (str[i]) i++;

    strind = i-1;
    revind = 0;
    prevind = '\0';
    end = i;

    while(strind >= 0)
    {
        if (str[strind]==' ')
        {
            if (str[prevind]!=' ')
            {
                for (pivot=prevind; pivot < end; ++pivot)
                {
                    reverse[revind] = str[pivot];
                    revind++;
                }
                reverse[revind] = str[strind];
                revind++;
            }
        }

        if (str[strind] == ' ')
            end = strind;

        prevind = strind;
        strind--;

    }

    for (pivot=prevind; pivot < end; ++pivot)
    {
        reverse[revind] = str[pivot];
        revind++;
    }
    reverse[revind] = '\0';

    printf("\n%s", reverse);

    return 0;
}
