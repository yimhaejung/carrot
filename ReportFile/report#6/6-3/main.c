#include <stdio.h>

void input_nums(int *lotto_nums); // 배열 입력함수 
void print_nums(int *lotto_nums); // 배열 출력함수

int main(void)
{
  int lotto_nums[6]; // int형 요소 6개의 배열 선언
  input_nums(lotto_nums); // 배열 입력함수 호출
  print_nums(lotto_nums); // 배열 출력함수 호출

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


