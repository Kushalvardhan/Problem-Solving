#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[80], str2[80];
    int i, j;
    j = 0;

    printf("Enter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);

    for (i= strlen(str1); i<= (strlen(str1)+strlen(str2)); ++i)
    {
        str1[i]=str2[j];
        j++;
    }

    printf("%s", str1);
    printf("\n%d", strlen(str1));

    return 0;
}
