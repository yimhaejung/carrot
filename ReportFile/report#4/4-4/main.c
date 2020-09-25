# include <stdio.h>

int main(void)
{
  int a, b;
  int sum1 = 0;
  int sum2 = 0;

  printf("enter the two integers a, b  : ");
  scanf("%d%d", &a, &b);
  if (a <= b)
  {
    while (a <= b)
    {
      sum1 += a;
      a++;
    }
    printf("sum1 from a to b : %d", sum1);
  }
  else
  {
    while (a >= b)
    {
      sum2 += b;
      b++;
    }
    printf("sum2 from a to b : %d", sum2);
  }   
  return 0;
}