#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2);

int main()
{
    int num1, num2;

    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);

    swap(&num1, &num2);

    printf("Num1 : %d\n", num1);
    printf("Num2 : %d\n", num2);

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
