#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct term
{
    int coef;
    int expo;
};

struct poly
{
    int n;
    struct term *equ;
};

void create(struct poly *p)
{
    int i;
    printf("Enter no of terms : ");
    scanf("%d", &p->n);

    p->equ = (struct term *)malloc(sizeof(struct term)*p->n);

    printf("\nEnter coefficient and exponent of each term\n");

    for(i=0; i< p->n; ++i)
        scanf("%d %d", &p->equ[i].coef, &p->equ[i].expo);
}

void display(struct poly p)
{
    int i;

    for(i=0; i<p.n; ++i)
        printf("%dX%d + ", p.equ[i].coef, p.equ[i].expo);
}

int evaluate(struct poly p, int x)
{
    int i, sum=0;
    printf("\nYour polynomial is : ");
    display(p);

    for(i=0; i<p.n; ++i)
        sum = sum + p.equ[i].coef * pow(x, p.equ[i].expo);

    return sum;
}

int main()
{
    int x;
    struct poly p;

    create(&p);

    printf("Enter 'X' value : ");
    scanf("%d", &x);

    printf("\n\nFor 'x' = %d : %d\n\n", x, evaluate(p, x));

    return 0;
}
