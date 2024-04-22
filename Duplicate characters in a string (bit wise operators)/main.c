#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[80];
    int i, h=0, x=0;

    printf("Enter your string : ");
    gets(str);

    for(i=0; str[i]!='\0'; ++i)
    {
        x=1;
        x = x<<str[i]-97;

        if(h&x)
            printf("%c is a duplicate\n", str[i]);
        else
            h=x|h;
    }
    return 0;
}
