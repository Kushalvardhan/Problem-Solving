#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100], prevchar;
    int index, i, j, k, count;
    printf("Enter your string : ");
    gets(str);

    index = 0;
    prevchar = '\0';

    while (str[index])
    {
        if (str[index] == ' ')
        {
            if (prevchar == ' ')
            {
                for (i=index; str[i] == ' '; ++i);

                count = i-index;

                for (k = 0; k<count; ++k)
                {
                    for(j=index; str[j]!='\0'; ++j)
                    {
                        str[j] = str[j+1];
                    }
                }
            }
        }
        index++;
    }

    printf("%s", str);
    return 0;
}
