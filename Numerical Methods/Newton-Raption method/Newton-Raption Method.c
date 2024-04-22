#include <stdio.h>
#include <math.h>

#define    f(x) x*exp(x)-2
#define   g(x) exp(x)*(x+1)

int main()
{
    float x0, x1, f0, f1, g0, g1;
    int step = 1;
    float error = 0.00001;

    printf("Enter your initial guess : ");
    scanf("%f", &x0);

    printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
    do
    {
        f0 = f(x0);
        g0 = g(x0);

        if(g0 == 0.0)
        {
            printf("Math Error !!!");
            break;
        }

        x1 = x0 -f0/g0;

        printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);

        x0 = x1;
        f1 = f(x1);
        step++;

        if(step > 10)
        {
            printf("Not Convergible");
            break;
        }

    }while (fabs(f1) > error);

    printf("Root is %f", x1);
}
