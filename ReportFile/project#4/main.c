#include <stdio.h>

void matrix(int matrix[][2], char *mention); // 행렬 출력하는 함수
void add(int a[][2], int b[][2]); // 합 구하는 함수
void sub(int a[][2], int b[][2]); // 차 구하는 함수
void mul(int a[][2], int b[][2]); // 곱 구하는 함수
void tran(int a[][2], int b[][2]); // 전치 구하는 함수

int main(void)
{
  int i, j;
  int a[2][2], b[2][2];
  printf("input the two 2x2 matrix you want\n");
  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }	
  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      scanf("%d", &b[i][j]);
    }
    printf("\n");
  }	
  // 다차원 배열 a와b를 인수로 둔 함수 호출
  add(a, b);
  sub(a,b);
  mul(a, b);
  tran(a, b);

	return 0;
}

void matrix(int matrix[][2], char *mention) // 2x2행렬과 문자열을 인수로 둔 출력함수
{
  printf("%s\n", mention);
  int i, j;

  for(i = 0; i < 2; i++)
  {
    printf("|");
    for(j = 0; j < 2; j++)
    {
      printf("%3d", matrix[i][j]);
    }
    printf("|\n");
  }
}
  
void add(int a[][2], int b[][2]) 
{
  int result[2][2];
  int i, j;

  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      result[i][j] = a[i][j] + b[i][j]; // 각 행렬의 같은 항끼리 합한값 구하기
    }
  }
  matrix(result, "Sum of matrices a + b = "); // 계산한 행렬 출력함수 호출
}

void sub(int a[][2], int b[][2])
{
  int result[2][2];
  int i, j;

  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      result[i][j] = a[i][j] - b[i][j]; // 각 행렬의 같은 항끼리 뺀값 구하기
    }
  }
  matrix(result, "Subtract of matrices a - b = "); // 계산결과와 문자열을 인수로 둔 출력함수 호출
}

void mul(int a[][2], int b[][2])
{
  int result[2][2];
  int i, j, k;

  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      for(k = 0; k < 2; k++)
      {
        result[i][j] += a[i][k] * b[k][j]; // 각 행렬의 행과 열을 순서대로 곱한값을 더해서 결과에 저장
      }
    }
  }
  matrix(result, "Multiply of matrix a * b = "); 
}

void tran(int a[][2], int b[][2])
{
  int temp1 = 0, temp2 = 0;
  
  temp1 = a[0][1];
  a[0][1] = a[1][0];
  a[1][0] = temp1;

  temp2 = b[0][1];
  b[0][1] = b[1][0];
  b[1][0] = temp2;

  matrix(a, "transpose of matrix a = ");
  matrix(b, "transpose of matrix b = ");
}

