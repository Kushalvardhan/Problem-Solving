#include <stdio.h>
#include <stdlib.h>

int first_occur(char *str, char *word);
void to_remove(char *str, int index, int wLen);

int main()
{
    char str[100], word[100];
    int index, wLen;

    printf("Enter your string : ");
    gets(str);

    printf("Enter your word to be removed : ");
    gets(word);

    index = first_occur(str, word);

    wLen = strlen(word);

    to_remove(str, index, wLen);

    printf("\n%s\n", str);

    return 0;
}

int first_occur(char *str, char *word)
{
    int i, found;
    int index = 0;

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
                return index;
            }
        }
        index++;
    }
}

void to_remove(char *str, int index, int wLen)
{
    int sLen = strlen(str);
    int i, j;

    for (i=0; i<wLen; ++i)
    {
        for(j=index; j<sLen; ++j)
        {
            str[j] = str[j+1];
        }
        sLen--;
    }
}
