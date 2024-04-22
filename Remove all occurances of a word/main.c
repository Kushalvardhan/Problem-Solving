#include <stdio.h>
#include <stdlib.h>

int to_remove(char *str, char *word);

int main()
{
    char str[100], word[100];
    int index, wLen;

    printf("Enter your string : ");
    gets(str);

    printf("Enter your word to be removed : ");
    gets(word);

    to_remove(str, word);

    printf("\n%s\n", str);

    return 0;
}

int to_remove(char *str, char *word)
{
    int i, j, k, found;
    int index = 0;
    int wLen = strlen(word);
    int sLen = strlen(str);

    while (str[index])
    {
        if (str[index] == word[0])
        {
            i=0;
            found = 1;
            while (word[i] != '\0')
            {
                if (str[index+i] != word[i])
                {
                    found = 0;
                    break;
                }
                i++;
            }
            if (found == 1)
            {
                for (i=0; i<wLen; ++i)
                {
                    for(j=index; j<sLen; ++j)
                    {
                        str[j] = str[j+1];
                    }
                    sLen--;
                }
            }
        }
        index++;
    }
    return 0;
}


