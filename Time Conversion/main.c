#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hh, mm, ss;
    char s[12];

    printf("Enter your time in 12-hour clock : ");
    scanf("%s", s);

    hh = (s[0]-'0')*10 + (s[1]-'0');
    mm = (s[3]-'0')*10 + (s[4]-'0');
    ss = (s[6]-'0')*10 + (s[7]-'0');

    if(hh<12 && s[8]=='P')
    {
        hh = hh+12;
    }

    if(hh==12 && s[8]=='A')
    {
        hh = 0;
    }

    printf("%02d:%02d:%02d", hh, mm, ss);


    return 0;
}
