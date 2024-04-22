#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr);
int binarys(struct array arr, int num);

int main()
{
    int num;
    int c = 1;
    struct array arr = {{1, 4, 7, 8, 11, 23, 67}, 20, 7};
    display(arr);

    printf("\nEnter your number to be searched : ");
    scanf("%d", &num);

    printf("\n%d is found at index : %d\n", num, binarys(arr, num));
    printf("\n");
}
void display(struct array arr)
{
    printf("The elements are : ");
    for(int i=0; i<arr.length; ++i)
    {
        printf("%d ", arr.A[i]);
    }
}

int binarys(struct array arr, int key)
{
    int l,h,mid;
    l = 0;
    h = arr.length - 1;
    mid = 0;

    while(l<=h)
    {
        mid = (l+h)/2;

        if(arr.A[mid]==key)
            return mid;

        else if(key<arr.A[mid])
            h = mid-1;

        else
            l = mid+1;
    }
    return -1;
}
