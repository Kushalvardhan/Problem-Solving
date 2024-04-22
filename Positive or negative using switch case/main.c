#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter an integer : ");
    scanf("%d", &x);

    switch(x>0)
    {
        case 1 : printf("%d is positive\n", x);
        break;

        case 0 :
            switch(x<0)
            {
                case 1 : printf("%d is negative\n", x);
                break;

                case 0 : printf("%d is zero\n", x);
                break;
            }
        break;
    }
    return 0;
}
