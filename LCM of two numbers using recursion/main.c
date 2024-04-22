#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b, int maxi);

int main()
{
    int a, b, c, LCM;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);

    if (a>b)
        printf("LCM : %d", lcm(a, b, a));
    else
        printf("LCM : %d", lcm(b, a, b));

    return 0;
}

int lcm(int a, int b, int maxi)
{
    if (a%b==0)
        return a;
    else
        return lcm(a+maxi, b, maxi);
}
