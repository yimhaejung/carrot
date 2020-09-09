#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int nA = 0;
  int nB = 0;
  printf("please input a two numbers:\n");
  scanf("%d %d", &nA, &nB);

  int nSum = 0;
  nSum = nA + nB;
  printf("sum is %d \n", nSum);
  return 0;
}