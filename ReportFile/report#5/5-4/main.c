# include <stdio.h>
# include <stdlib.h>
# include <math.h> //sqrt함수 사용하기 위해 추가

double distance(double x, double y); //distance함수 선언(반환형, 매개변수 모두포함)

int main(void)
{
  double p1x, p2x, p1y, p2y;
  double result;

  printf("Enter two points 1(x, y) 2(x, y): ");
  scanf("%lf%lf%lf%lf", &p1x, &p1y, &p2x, &p2y);

  double a = p2x - p1x;
  double b = p2y - p1y;

  result = distance(a, b); //distance함수 호출
  printf("Distance between two points : %.2lf\n", result);

  return 0;
}

double distance(double x, double y) //distance함수 정의 시작
{
  double dis = sqrt((x * x) + (y * y)); //sqrt는 ()안의 수의 제곱근을 구하는 함수
  
  return dis; //dis값 반환
}
