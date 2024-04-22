#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80

void conversion(char *line);

int main()
{
    char line[MAX];

    printf("Enter a string : ");
    gets(line);

    conversion(line);

    printf("%s", line);

    return 0;
}

void conversion(char *line)
{
    int i = 0;
    while (line[i])
    {
        if (line[i]>='a' && line[i]<='z')
        {
            line[i] = line[i]-32;
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
}
