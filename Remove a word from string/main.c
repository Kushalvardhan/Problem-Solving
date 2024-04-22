#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int first_occur(char *str, char *word);
void to_remove(char *str, int index, int wordlen, int len);

int main()
{
    char str[100], word[100];
    int wordlen, index, len;

    printf("Enter your String : ");
    gets(str);

    printf("Enter your Word : ");
    gets(word);

    index = first_occur(str, word);

    wordlen = strlen(word);
    len = strlen(str);

    to_remove(str, index, wordlen, len);

    printf("%s", str);

    return 0;
}

int first_occur(char *str, char *word)
{
    int start = 0;
    char prevchar = '\0';
    int len = strlen(word);
    int i, pivot;

    while (str[start])
    {
        if(str[start] != ' ')
        {
            if (prevchar == ' ' || prevchar == '\0')
            {
                i=0;

                for (pivot = start; (str[pivot] != ' ' && str[pivot] != '\0');  ++pivot)
                {
                    if(word[i] != str[pivot])
                        break;
                    i++;
                }
                if (i == len && (str[pivot] == ' ' || str[pivot] == '\0'))
                {
                    return start;
                }
            }
        }
        prevchar = str[start];
        start++;
    }
}

void to_remove(char *str, int index, int wordlen, int len)
{
    int i, j;

    for (j=0; j<wordlen; j++)
    {
        for (i=index; i<len; ++i)
        {
            str[i] = str[i+1];
        }
        len--;
    }
}
