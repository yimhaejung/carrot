# include <stdio.h>

int main(void)
{
  int a, b;

  printf("please input the two integer variables a, b : ");
  scanf("%d%d", &a, &b);

  if (b >= a)
  {
    if (b % a == 0)
    {
      printf("%d is a weak number of %d\n", a, b);
    }
    else 
    {
      printf("%d isn't a weak number of %d\n", a, b);
    }
  }
  else
  {
    printf("%d isn't a weak number of %d\n", a, b);
  }
  
  return 0;
}