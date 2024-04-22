#include <stdio.h>
#include <stdlib.h>

void anagram(char *str1, char *str2);

int main()
{
    int i, j;
    char str1[80], str2[80];

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
    int i, j, k;
    int hash[26] = {0};

    for(i=0; str1[i]!='\0'; ++i)
    {
        hash[str1[i]-97]++;
    }
    for(j=0; str2[j]!='\0'; ++j)
    {
        hash[str2[j]-97]--;
    }
    for(k=0; k<26; ++k)
    {
        if(hash[k]!=0)
        {
            printf("\nNot Anagrams!\n");
            return;
        }
    }

    printf("\nBoth are Anagrams\n");
    return;
}
