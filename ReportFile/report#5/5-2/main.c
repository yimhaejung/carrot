#include <stdio.h>

int rec_func(int n); //rec_func 함수 선언

int main(void)
{
  int n = 10;
  printf("%d\n", rec_func(n)); //rec_func 함수 호출
  return 0;
}

int rec_func(int n)
{
  if (n==1) //n이 1일 때는 1값 그대로 반환
  {
    return 1;
  }
  else
  {
    return n + rec_func(n-1); //n + rec_func(n-1)값 반환한 뒤(rec_func(n-1)다시 호출)
  }
}