#include <stdio.h>

int main(void)
{
  int a, b;
  int one, two, thr, fiv;
  double fou; 

  printf("please intput the integer variable number : ");
  scanf("%d%d", &a, &b);

  one = a + b;
  two = a - b;
  thr = a * b; 
  fou = ((double)a) / ((double)b);
  fiv = a % b;

  printf("덧셈 : %d\n", one);
  printf("뺼셈 : %d\n", two);
  printf("곱셈 : %d\n", thr);
  printf("나눗셈 : %.4lf\n", fou);
  printf("나머지 : %d", fiv); 

  return 0;
  }