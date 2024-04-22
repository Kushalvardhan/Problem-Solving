#include <stdio.h>

int main()
{
    char line[100];
    char prevchar;
    int i, words;

    printf("Enter your string : ");
    scanf(" %[^\n]", &line);

    i=0;
    words = 0;
    prevchar = '\0';

    while (1)
    {
        if (line[i]==' ' || line[i]=='\t' || line[i]=='\0')
        {
            if (prevchar!=' ' && prevchar!='\t' && prevchar!='\0')
            {
                words++;
            }
        }

        prevchar = line[i];

        if (line[i] == '\0')
            break;
        else
            i++;
    }

    printf("\nNumber of Words : %d\n", words);
}
