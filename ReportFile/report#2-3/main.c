#include <stdio.h>

int main(void)
{
  int a, b;
  int one, two, thr, fiv;
  double fou; 

  a = 12;
  b = 7;
  one = a + b;
  two = a - b;
  thr = a * b; 
  fou = a / b;
  fiv = a % b;

  printf("덧셈 : %d\n", one);
  printf("뺼셈 : %d\n", two);
  printf("곱셈 : %d\n", thr);
  printf("나눗셈 : %.4lf\n", fou);
  printf("나머지 : %d", fiv); 

  return 0;
  }