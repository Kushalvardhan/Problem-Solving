#include <stdio.h>
#include <math.h>

#define f(x) log(x)-cos(x)

int main()
{
    float x0, x1, x2, f0, f1, f2;
    int step = 1;
    float error = 0.0001;

    printf("Enter two initial guesses : ");
    scanf("%f %f", &x0, &x1);

    f0 = f(x0);
    f1 = f(x1);
    printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
    do
    {
        x2 = (x0+x1)/2;
        f2 = f(x2);

        printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);

        if( f0 * f2 < 0)
        {
            x1 = x2;
            f1 = f2;
        }
        else
        {
            x0 = x2;
            f0 = f2;
        }
        step++;

    }while (fabs(f2) > error);

    printf("Root is %f", x2);
}
