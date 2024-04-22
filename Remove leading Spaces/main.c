#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i, k, spaceNo, len;

    printf("Enter your string : ");
    gets(str);

    for (i=0; str[i] == ' '; ++i);

    spaceNo = i;
    len = strlen(str);

    for (k = spaceNo; k<=len; ++k)
    {
        str[k-spaceNo] = str[k];
    }

    printf("\n%s\n", str);

    return 0;
}
