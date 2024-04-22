#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int len, startindex, endindex;

    printf("Enter your string : ");
    gets(str);

    len = 0;
    while(str[len] != '\0') len++;

    startindex = 0;
    endindex = (len-1);

    while (startindex <= endindex)
    {
        if (str[startindex] != str[endindex])
            break;

        startindex++;
        endindex--;
    }

    if (startindex >= endindex)
        printf("The string is Palindrome!\n");
    else
        printf("The string is not Palindrome!\n");


    return 0;
}
