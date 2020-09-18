#include <stdio.h>

int main(void)
{
  int a, b;

  printf("please input the two integer variables a, b : ");
  scanf("%d%d", &a, &b);

  if ((a % 2 == 0) && (a != 0))
  {
    if ((b % 2 == 0) && (b != 0))
    {
      printf("Both numbers are even.\n");
    }
    else if ((b % 2 == 1) && (b != 0))
    {
      printf("a is even, b is odd.\n");
    }
    else
    {
      printf("a is even, b is 0.\n");
    }
    
  }
  else if ((a % 2 == 1) && ( a != 0))
  {
    if ((b % 2 == 0) && (b != 0))
    {
      printf("a is odd, b is even.\n");
    }
    else if (((b % 2 == 1) && (b != 0)))
    {
      printf("Both numbers are odd.\n");
    }
    else
    {
      printf("a is odd, b is 0.\n");
    }
    
  }
  else
  {
    if ((b % 2 == 0) && (b != 0))
    {
      printf("a is 0, b is even.\n");
    }
    else if (((b % 2 == 1) && (b != 0)))
    {
      printf("a is 0, b is odd.\n");
    }
    else
    {
      printf("Both numbers are 0.\n");
    }
  }  
  return 0;
}