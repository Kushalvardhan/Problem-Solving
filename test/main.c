#include <stdio.h>
#include <stdlib.h>

int minimumDistances(int a_count, int* a)
{
    int i, j, differ=-1;
    int min = INT_MAX;

    for(i=0; i<a_count; ++i)
    {
        for(j=i+1; j<a_count; ++j)
        {
            if(a[i] == a[j])
            {
                differ = j-i;
                if(differ < min) min = differ;
            }
        }
    }

    if(differ == -1) return differ;
    else return min;
}

int main()
{
    int a[] = {1, 2, 3, 4, 10};
    int count = minimumDistances(5, a);

    printf("%d", count);
}
