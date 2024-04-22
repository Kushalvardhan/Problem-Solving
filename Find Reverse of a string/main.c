#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[100], reverse[100];
    int i, rev_index, line_index;

    printf("Enter your string : ");
    scanf(" %[^\n]", &line);

    i = 0;
    while (line[i]) i++;

    line_index = i-1;
    rev_index = 0;

    while (line_index >= 0)
    {
        reverse[rev_index] = line[line_index];

        rev_index++;
        line_index--;
    }

    reverse[i] = '\0';

    printf("%s", reverse);

    return 0;
}
