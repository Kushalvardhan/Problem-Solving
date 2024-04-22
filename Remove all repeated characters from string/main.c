#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, len;

    printf("Enter your string : ");
    gets(str);

    len = strlen(str);

    for (i=0; i<len; ++i)
    {
        if (str[i] == ' ')
            continue;               //Extra or repeated spaces are not removed
        else                        //only Alphabets, digits and special characters are removed
        {
            for (j=i+1; j<len; ++j)
            {
                if (str[i] == str[j])
                {
                    for (k=j; k<len; ++k)
                    {
                        str[k] = str[k+1];
                    }
                    len--;
                    j--;
                }
            }
        }
    }

    printf("%s", str);

    return 0;
}
