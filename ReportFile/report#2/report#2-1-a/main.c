#include <stdio.h>
#include <math.h>

int main(void)
{
  double a = -10.0;
  double b = 3.6;

  printf("나머지 : %.5lf", fmod (a, b));
  return 0;
}
