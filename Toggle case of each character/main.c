#include <stdio.h>
#include <stdlib.h>

void conversion(char *line);

int main()
{
    char line[80];

    printf("Enter a string : ");
    gets(line);

    conversion(line);

    printf("The Toggle case of each character is : \n\n");
    printf("%s\n", line);

    return 0;
}

void conversion(char *line)
{
    int i = 0;

    while (line[i])
    {
        if (line[i]>='a' && line[i]<='z')
            line[i] = line[i] - 32;

        else if (line[i]>='A' && line[i]<='Z')
            line[i] = line[i] + 32;

        i++;
    }
    return;
}
