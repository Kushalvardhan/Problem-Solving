#include <stdio.h>
#include <stdlib.h>

struct numbers
{
    int n;
    struct numbers *ptr;
};

int main()
{
    struct numbers n1, n2, n3;

    n1.n = 1;
    n1.ptr = &n2;

    n2.n = 2;
    n2.ptr = &n3;

    n3.n = 3;
    n3.ptr = NULL;

    printf("n1.n = %d\n", n1.n);
    printf("n2.n = %d\n", n1.ptr->n);
    printf("n3.n = %d\n", n2.ptr->n);

    return 0;
}
