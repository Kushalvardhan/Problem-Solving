#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char ch;
    int charpos, len, i;

    printf("Enter your string : ");
    gets(str);

    printf("Enter your character to be removed : ");
    scanf("%c", &ch);

    len = strlen(str);

    for (charpos = 0; str[charpos]!='\0'; ++charpos)
    {
        if (str[charpos] == ch)
            break;
    }

    for (i=charpos; i<len; ++i)
    {
        str[i] = str[i+1];
    }

    printf("%s", str);
    return 0;
}
