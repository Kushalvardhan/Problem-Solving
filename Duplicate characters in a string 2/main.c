#include <stdio.h>
#include <stdlib.h>

//This method uses hashing
int main()
{
    char str[80];
    char hash[26] = {0};
    int i, j, k;

    printf("Enter your String : ");
    gets(str);

    for(i=0; str[i]!='\0'; ++i)
    {
        hash[str[i]-97]+=1;
    }

    for(j=0; j<26; ++j)
    {
        if(hash[j]>=1)
        {
            printf("%c occured %d times\n", j+97, hash[j]);
        }
    }
    return 0;
}
