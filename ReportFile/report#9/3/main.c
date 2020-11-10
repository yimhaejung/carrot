#include <stdio.h>
#include <string.h>

void swap(char *cp, void *vp1, void *vp2); // 프로필 교환 함수 선언

int main(void)
{
  int age1, age2;
  double hei1, hei2;

  printf("첫 번째 사람의 나이와 키 입력 : ");
  scanf("%d%lf", &age1, &hei1);

  printf("두 번쨰 사람의 나이와 키 입력 : ");
  scanf("%d%lf", &age2, &hei2);

  swap("int", &age1, &age2);
  swap("double", &hei1, &hei2);

  printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", age1, hei1);
  printf("첫 번째 사람의 나이와 키 : %d, %.1lf", age2, hei2);
  return 0;
}

void swap(char *cp, void *vp1, void *vp2) /* int형과 double형 모두 교환할 수 있는 함수(선택문 사용)
int형과 double형 모두 사용하기 위해 void포인터 사용*/
{
  int int_tmp;  // 정수형 임시 변수
  double db_tmp; // 실수형 임시 변수
 
  if(strcmp(cp, "int") == 0) // 자료형이 int형일 경우 교환 ,strcmp는 문자열 비교함수
  {
    int_tmp = *(int *)vp1; // int *로 형 변화
    *(int *)vp1 = *(int *)vp2; 
    *(int *)vp2 = int_tmp;
  }
  else if(strcmp(cp, "double") == 0) // 자료형이 double형일 경우 교환
  {
    db_tmp = *(double *)vp1; // double *로 형 변환
    *(double *)vp1 = *(double *)vp2;
    *(double *)vp2 = db_tmp;
  }
}

