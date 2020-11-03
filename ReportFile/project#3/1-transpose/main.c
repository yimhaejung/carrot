#include <stdio.h>

int main(void)
{
  int matrix[2][2]; // 2 x 2행렬을 배열로 선언
  int i, j;

  printf("input the 2x2 matrix you want\n");
  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      scanf("%3d, ", &matrix[i][j]);
    }
    printf("\n");
  }
 
  int temp = 0;

  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      if(i < j) // 열과 행을 바꾸는 계산
      {
        temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
      }
    }
  }
  printf("Transpose 2x2 matrix\n"); // 전치한 행렬 출력
  for(i = 0; i < 2; i++)
  {
    printf("|");
    for(j = 0; j < 2; j++)
    {
      printf("%3d", matrix[i][j]);
    }
    printf("|\n");
  }
  return 0;
}