#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a, b;
  char cal;
  
  printf("사칙연산 입력(정수) : ");
  scanf("%d%c%d", &a, &cal, &b);

  switch(cal)
  {
    case '+': printf("%d%c%d=%d", a, cal, b, a + b);
    break;
    case '-': printf("%d%c%d=%d", a, cal, b, a - b);
    break;
    case '*': printf("%d%c%d=%d", a, cal, b, a * b);
    break;
    case '/': printf("%d%c%d=%d", a, cal, b, a / b);
    break;
  }
  return 0;
}