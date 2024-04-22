#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_char(char *str, char pos);

int main()
{
    char str[100], ch;
    int i;

    printf("Enter your string : ");
    gets(str);

    printf("Enter your character to be removed : ");
    scanf("%c", &ch);

    for (i=0; str[i]!='\0'; ++i)
    {
        if (str[i] == ch)
        {
            remove_char(str, i);
            i--;
        }
    }

    printf("%s", str);

    return 0;
}

void remove_char(char *str, char pos)
{
    int i, len;
    len = strlen(str);

    for (i=pos; pos < len; ++pos)
    {
        str[pos] = str[pos+1];
    }
    return;
}
