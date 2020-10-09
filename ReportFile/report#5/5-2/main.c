#include <stdio.h>

int rec_func(int n);

int main(void)
{
    int n;
    printf("input the integer number : ");
    scanf("%d", &n);
    printf("sum from 1 to %d : %d\n", n, rec_func(n));
    return 0;
}

int rec_func(int n)
{
    if (n==1) 
    {
      return 1;
    }
    else
    {
      return n + rec_func(n-1);
    }  
}