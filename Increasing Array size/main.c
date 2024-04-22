#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, i, n2, *p, *q;

    printf("Enter size of array(elements are auto generated) : ");
    scanf("%d", &n1);

    p = (int *)malloc(n1*sizeof(int));

    printf("\nThe array elements are : ");
    for(i=0; i<n1; ++i)
    {
        p[i]=(i+1)*10;
        printf("%d ", p[i]);

    }
    printf("\n");
    printf("\n");

    printf("Enter new size of the array(increased size) : ");
    scanf("%d", &n2);

    q = (int *)malloc(n2*sizeof(int));

    for(i=0; i<n1; ++i)
    {
        q[i] = p[i];
    }

    free(p);
    p=q;
    q=NULL;

    printf("\nThe increased array elements are : ");

    for(i=0; i<n1; ++i)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
    return 0;
}
