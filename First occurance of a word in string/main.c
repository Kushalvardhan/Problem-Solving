#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], word[100], prevchar;
    int i, len, pivot, start, found = 0;

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
                    printf("Word found at index : %d\n", start);
                    found = 1;
                    break;
                }
            }
        }
        prevchar = str[start];
        start++;
    }

    if (found == 0)
        printf("Word not found");

    return 0;
}
