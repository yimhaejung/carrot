#include <stdio.h>

int main(void)
{
  int weight, res;
  double height, BMI;

  height /= 100;
  printf("몸무게(kg)와 키(cm)를 입력하세요 : ");
  scanf("%d%lf", &weight, &height);
  BMI = weight / (height * height);
  res = (BMI >= 20.0) && (BMI < 25.0);
  printf("%s", (res) ? "표준입니다." : "체중관리가 필요합니다.");  

  return 0;
  }