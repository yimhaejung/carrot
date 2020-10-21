#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *pa, int *pb); // 두 실수 바꾸는 함수
void line_up(int *maxp, int *minp); // 숫자 비교함수 선언
int b_rand(int *rand_num); // 숫자 랜덤생성 함수 

int main(void)
{
  int rand_num[10];
  b_rand(rand_num); // rand함수 호출

  return 0;
}
int b_rand(int *rand_num)
{
  int i, j;
  int rand_num[10];
  srand(time(NULL));

  printf("랜덤번호 : ");
  for(i = 0; i < 10; i++) // 랜덤 숫자 10개 생성
  {
    rand_num[i] = rand() % 50; // 랜덤 숫자를 rand_num[i]에 저장
    for(j = 0; j < i; j++)
    {
      if(rand_num[i] == rand_num[j])
      {
        i--;
        break; // 안쪽 for문 탈출
      }
    }
    printf("%d", rand_num[i]);
  }
  for(i = 0; i < 10; i++)
  {
    for(j = 0; j < 10; j++)
    {
      line_up(&rand_num[j], &rand_num[j + 1]);
    }
  }
  printf("rand_num : ");
  for(i = 0; i < 10; i++) 
  {
    printf("%d", rand_num[i]);
  }
  return rand_num[10];
}
void swap(int *pa, int *pb)
{
  int temp;
  temp = *pa;
  *pa = *pb;
  *pb = temp;
}
void line_up(int *maxp, int *minp)
{
  if(*maxp < *minp)
  {
    swap(maxp, minp); // 두 실수 바꾸는 함수 호출
  }
}
