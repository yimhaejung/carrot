#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input_nums(int *lotto_nums); // 배열 입력함수 
void print_nums(int *lotto_nums); // 배열 출력함수
int rand_nums(int *lotto_nums); 

int main(void)
{
  int lotto_nums[7]; // int형 요소 7개의 배열 선언
  input_nums(lotto_nums); // 배열 입력함수 호출
  print_nums(lotto_nums); // 배열 출력함수 호출
  rand_nums(lotto_nums); 

  return 0;
}
void input_nums(int *lotto_nums)
{
  int i, j;
  for(i = 0; i < 6; i++)
  {
    printf("번호 입력 : ");
    scanf("%d", &lotto_nums[i]); // lotto_nums포인터로 배열 요소 출력
    if(lotto_nums[i] > 0 && lotto_nums[i] <= 45)
    {
      for(j = 0; j < i; j++)
      {
        if(lotto_nums[i] == lotto_nums[j]) // 이전에 입력했던 숫자와 같은지 확인
        {
          printf("같은 번호가 있습니다!\n");
          i--;
          break; // 안쪽 for문 탈출 
        }
        else
        {
          continue; // 안쪽 for문 다시반복
        }
      }
    } 
    else
    {
      printf("45이하의 번호를 입력하시오: ");
      scanf("%d", &lotto_nums[i]);
      i--;
      continue; // 바깥쪽 for문 다시반복
    } 
  }
}
void print_nums(int *lotto_nums)
{
  int i;
  printf("로또 번호 :");
  for(i = 0; i < 6; i++)
  {
    printf("%3d", lotto_nums[i]); // 포인터로 배열 요소 출력 0~5까지 총 6개
  }
}
int rand_nums(int *lotto_nums)
{
  int lotto_nums[7];
  int i, j, rank;
  int total_lotto, total_rand;
  srand(time(NULL));
  for(i = 0; i < 7; i++)
  {
    lotto_nums[i] = rand() % 46 + 1; // 1부터 45까지 출력
    for (j = 0; j < i; j++) 
    {
      if(lotto_nums[i] == lotto_nums[j]) 
      {
        i--;
        break;
      }
    }
  } 
  for(i = 0; i < 6; i++)
  {
    printf("로또번호 : %d", rand_nums[i]);
  }
  printf("보너스번호 : %d", rand_nums[i]);
  for(i = 0; i < 7; i++)
  {
    for(j = 0; j < 7; j++)
    {
      if(lotto_nums[i] == lotto_nums[total_rand])
      {
        total_lotto++;
      }
    }
    total_rand++;
  }
  switch(total_lotto)
  {
    case 6:
    rank = printf("1등");
    break;
    case 5:
    rank = printf("2등");
    break;
    case 4:
    rank = printf("3등");
    break;
    case 3:
    rank = printf("4등");
    break;
    case 2:
    rank = printf("5등");
    break;
    defalut:
    rank = printf("다음 기회에!");
    break;
  }
  return lotto_nums[7];
}

  
  



