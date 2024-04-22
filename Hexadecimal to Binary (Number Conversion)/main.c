#include <stdio.h>
#include <stdlib.h>

long long int binary(char *hex)
{
    int index,i;
    long long int sum;
    char hexval[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int binval[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};

    index = 0;
    sum = 0;

    while (hex[index])
    {
        for (i=0; i<16; ++i)
        {
            if (hexval[i] == hex[index])
            {
                sum = (sum*10000) + binval[i];
                break;
            }
        }
        index++;
    }
    return sum;
}

int main()
{
    char hex[20];
    printf("Enter your Hexadecimal number : ");
    scanf("%s", hex);

    printf("The Binary Equivalent of %s is : %lld", hex, binary(hex));

    return 0;
}
