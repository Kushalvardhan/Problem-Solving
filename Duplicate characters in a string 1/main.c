#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, len, count;
    char str[80];

    printf("Enter your string : ");
    gets(str);

    for(i=0; str[i]!='\0'; ++i){ }
    len = i;

    for(i=0; i<len; ++i)
    {
        count = 1;
        if(str[i]!=0)
        {
            for(j =i+1; j<len; ++j)
            {
                if(str[i]==str[j])
                {
                    str[j] = 0;
                    count++;
                }
            }
            printf("%c occured %d times\n", str[i], count);
        }
    }
    return 0;
}
