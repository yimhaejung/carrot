#include <stdio.h>

int main(void)
{
  double matrix[2][2]; //분수 계산이 있어서 실수 선언
  double inverse[2][2];
  double det;
  int i, j;

  printf("input the 2x2 matrix you want\n");
  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      scanf("%lf, ", &matrix[i][j]);
    }
    printf("\n");
  }

  det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
  if(det == 0)
  {
    printf("There's no inverse matrix");
  }

  inverse[0][0] = matrix[1][1] / det; // 2x2역행렬 구하는 식 이용
  inverse[0][1] = -matrix[0][1] / det;
  inverse[1][0] = -matrix[1][0] / det;
  inverse[1][1] = matrix[0][0] / det;

  for(i = 0; i < 2; i++) // 계산한 역행렬 출력
  {
    printf("|");
    for(j = 0; j < 2; j++)
    {
      printf("%.2lf, ", inverse[i][j]);
    }
    printf("|\n");
  }
  return 0;
}