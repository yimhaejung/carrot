#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int *sum(int a, int b)
{
  static int res;
  res = a + b;
  return res;
}
int main(void)
{
  int *resp;
  resp = sum(10, 20);
  printf("gkq : %d\n", *resp);

  return 0;
}
