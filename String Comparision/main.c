#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[80], str2[80];
    int res;

    printf("Enter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);

    res = compare(str1, str2);

    if (res==0)
        printf("\nBoth are equal\n");
    else if (res > 0)
        printf("\nString 1 > string 2\n");
    else
        printf("\nString 2 > String 1\n");

    return 0;
}

int compare(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' && str2[i] == '\0')
            break;

        i++;
    }

    return str1[i] - str2[i];
}
