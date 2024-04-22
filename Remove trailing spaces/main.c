#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i, len, index;

    printf("Enter your string : ");
    gets(str);

    printf("\nBefore : \"%s\"", str);

    len = strlen(str);

    for (i=0; str[i] != '\0'; ++i)
    {
        if (str[i] != ' ')
            index = i;
    }

    str[index+1] = '\0';

    printf("\nAfter : \"%s\"", str);

    return 0;
}
