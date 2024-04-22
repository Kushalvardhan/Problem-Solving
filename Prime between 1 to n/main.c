#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i, j, num, count;
    printf("Enter the upper bound : ");
    scanf("%d", &num);

    for (i = 2; i<=num; i++)
    {
        count = 0;

        for (j = 2; j< (int)(sqrt(i)+1); j++)
        {
            if (i%j == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ", i);
        }
    }


    return 0;
}
