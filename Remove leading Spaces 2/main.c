#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i, j, k, spaceNo, len;

    printf("Enter your string : ");
    gets(str);

    len = strlen(str);
    printf("Before : %d", len);
    for (i=0; str[i] == ' '; ++i);

    spaceNo = i;

    for (j = 0; j<spaceNo; j++)
    {
        for (k = 0; k<len; ++k)
        {
            str[k] = str[k+1];
        }
        len--;
    }
    printf("\n%d\n", strlen(str));
    printf("%s", str);

    return 0;
}
