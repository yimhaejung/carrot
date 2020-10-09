#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int b_rand(void);
int main(void)
{
    int a;
    char b;
    while(1)
    {
    printf("앞면 또는 뒷면(1또는 0):");
    scanf("%d", &a);
    {if(a==b_rand())
        printf("맞았습니다.\n");
    else
        printf("틀렸습니다.\n");}
    printf("계속하시겠습니까(y 또는 n): ");
    getchar();
    scanf("%c", &b);
    if(b=='n')
        break;
    else if(b=='y')
        continue;
    }
    return 0;
}
int b_rand(void)
{
int a;
srand((unsigned)time(NULL));
    a=rand()%2;
    return a;
}


