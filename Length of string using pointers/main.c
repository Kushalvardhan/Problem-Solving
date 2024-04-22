#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[100];
    char *str = line;
    int count = 0;

    printf("Enter a string : ");
    gets(line);

    while (*(str++)) count++;

    printf("Length = %d", count);
    return 0;
}
