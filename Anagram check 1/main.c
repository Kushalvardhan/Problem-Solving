#include <stdio.h>
#include <stdlib.h>

void anagram(char *str1, char *str2);

int main()
{
    char str1[80], str2[80];
    int i, j, len;

    printf("Enter string 1 : ");
    gets(str1);

    printf("Enter string 2 : ");
    gets(str2);

    for(i=0; str1[i]!='\0'; ++i){}
    for(j=0; str2[j]!='\0'; ++j){}

    if(i==j)
        anagram(str1, str2);
    else
        printf("\nLengths are not equal\n");

    return 0;
}

void anagram(char *str1, char *str2)
{
    int i, j, check=1, find;

    for(i=0; str1[i]!='\0'; ++i)
    {
        find = 0;
        for(j=0; str2[j]!='\0'; ++j)
        {
            if(str1[i]==str2[j])
            {
                str2[j]='*';
                find = 1;
                break;
            }
        }
        if(find==0)
        {
            printf("\nNot Anagrams!\n");
            return;
        }
    }
    printf("\nBoth are Anagrams!\n");
    return;
}
