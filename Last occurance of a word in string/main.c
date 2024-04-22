#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], word[100], prevchar;
    int i, len, pivot, start, index;

    printf("Enter your string : ");
    gets(str);

    printf("Enter the word : ");
    gets(word);

    start = 0;
    prevchar = '\0';
    len = strlen(word);

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
                    index = start;
                }
            }
        }
        prevchar = str[start];
        start++;
    }

    printf("The last occurance of %s is at : %d", word, index);

    return 0;
}
