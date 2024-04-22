#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct player
{
    char role;
    int num;
};
typedef struct player player;

void distribute(player *chits, int n, int m, int s)
{
    int i, j, k, *check;
    int random_index;

    check = (int *)calloc(n, sizeof(int));

    srand(time(NULL));

    for(i=1; i<=m; ++i)
    {
        while(1)
        {
            random_index = rand()%(n);
            if(check[random_index] == 0)
            {
                chits[random_index].role = 'M';
                chits[random_index].num = i;
                check[random_index]++;
                break;
            }
        }
    }

    for(j=1; j<=s; ++j)
    {
        while(1)
        {
            random_index = rand()%(n);
            if(check[random_index] == 0)
            {
                chits[random_index].role = 'S';
                chits[random_index].num = j;
                check[random_index]++;
                break;
            }
        }
    }

    for(k=1; k<=(n-s-m); ++k)
    {
        while(1)
        {
            random_index = rand()%(n);
            if(check[random_index] == 0)
            {
                chits[random_index].role = 'V';
                chits[random_index].num = k;
                check[random_index]++;
                break;
            }
        }
    }

    return;
}

int main()
{
    int n, m, s;
    player *chits = (player *)malloc(n*sizeof(player));

    printf("Enter N M S values : ");
    scanf("%d %d %d", &n, &m, &s);

    distribute(chits, n, m, s);

    printf("\nSuccessful Distribution\n");
    for(int i = 0; i<n; ++i)
    {
        printf("%d) %c%d\n", i+1, chits[i].role, chits[i].num);
    }

    return 0;
}
