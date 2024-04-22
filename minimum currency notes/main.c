#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note500, note100, note50, note20, note10, note5, note2, note1;

    printf("Enter amount in rupees : ");
    scanf("%d", &note1);

    note500 = (note1/500);
    note100 = (note1 -(note500*500))/100;
    note50 = (note1 -((note500*500)+(note100*100)))/50;
    note20 = (note1 - ((note500*500)+(note100*100)+(note50*50)))/20;
    note10 = (note1 - ((note500*500)+(note100*100)+(note50*50)+(note20*20)))/10;
    note5 = (note1 - ((note500*500)+(note100*100)+(note50*50)+(note20*20)+(note10*10)))/5;
    note2 = (note1 - ((note500*500)+(note100*100)+(note50*50)+(note20*20)+(note10*10)+(note5*5)))/2;
    note1 = (note1 - ((note500*500)+(note100*100)+(note50*50)+(note20*20)+(note10*10)+(note5*5)+(note2*2)))/1;

    printf(" 500\t: %d\n 100\t: %d\n 50\t: %d\n 20\t: %d\n 10\t: %d\n 5\t: %d\n 2\t: %d\n 1\t: %d\n", note500, note100, note50, note20, note10, note5, note2, note1);




    return 0;
}
