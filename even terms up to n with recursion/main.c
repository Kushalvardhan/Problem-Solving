#include <stdio.h>
#include <stdlib.h>

int even(int lower, int upper);

int main()
{
    int num;
    printf("Enter upper limit : ");
    scanf("%d", &num);

    printf("Even number up to %d are : ", num);
    even(2, num);
    return 0;
}

int even(int lower, int upper)
{
    if (lower > upper)
        return;
    else
    {
        printf("%d ", lower);
        even(lower+2, upper);
    }




}
