#include <stdio.h>

void matrix(int matrix[][3], char *mention); // 행렬 출력하는 함수
void add(int a[3][3], int b[3][3]); // 합 구하는 함수
void sub(int a[3][3], int b[3][3]); // 차 구하는 함수
void mul(int a[3][3], int b[3][3]); // 곱 구하는 함수

int main(void)
{
  int i, j;
  int a[3][3], b[3][3];
  printf("input the two 3x3 matrix you want\n");
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }	
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      scanf("%d", &b[i][j]);
    }
    printf("\n");
  }	
  // 다차원 배열 a와b를 인수로 둔 함수 호출
  add(a, b); 
  sub(a, b);
  mul(a, b);

	return 0;
}

void matrix(int matrix[][3], char *mention) // 3x3행렬과 문자열을 인수로 둔 출력함수
{
  printf("%s\n", mention);
  int i, j;

  for(i = 0; i < 3; i++)
  {
    printf("|");
    for(j = 0; j < 3; j++)
    {
      printf("%3d", matrix[i][j]);
    }
    printf("|\n");
  }
}
  

void add(int a[][3], int b[][3])
{
  int result[3][3];
  int i, j;

  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      result[i][j] = a[i][j] + b[i][j]; // 각 행렬의 같은 항끼리 합한값 구하기
    }
  }
  matrix(result, "Sum of matrices a + b = "); // 계산한 행렬 출력함수 호출
}

void sub(int a[][3], int b[][3])
{
  int result[3][3];
  int i, j;

  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      result[i][j] = a[i][j] - b[i][j]; // 각 행렬의 같은 항끼리 뺀값 구하기
    }
  }
  matrix(result, "Subtract of matrices a - b = "); // 계산결과와 문자열을 인수로 둔 출력함수 호출
}

void mul(int a[][3], int b[][3])
{
  int result[3][3];
  int temp = 0;
  int i, j, k;

  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      for(k = 0; k < 3; k++)
      {
        temp += a[i][k] * b[k][j]; 
        result[i][j] = temp; // 각 행렬의 행과 열을 순서대로 곱한값을 더해서 결과에 저장
      }
    }
  }
  matrix(result, "Multiply of matrix a * b = "); 
}