#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char line[80];
    int count, tag;

    for (count = 0; (line[count] = getchar()) != '\n'; ++count)
        ;
    line[count] = '\0';

    printf("\n\nThe line you Have Entered is : \n\n");
    printf("%s\n", line);

    printf("\n\nThe Upper Case Conversion is : \n\n");
    printf("\a");
    for (count = 0; line[count] != '\0'; ++count)
        putchar(toupper(line[count]));

    printf("\n\n");

    return 0;
}
