#include <stdio.h>
#include <math.h>

int main(void)
{
  double slope; // 기울기와 절편은 실수로 선언
  double bias;
  double pointx, pointy;
  
  printf("y = ax + b input the slop(a) and bias(b) : ");
  scanf("%lf%lf", &slope, &bias);
  
  double A, B;
  A = -1 / slope; 
  B = bias / slope;
  printf("y = %.1lfx + %.1lf : x + %.1lfy + %.1lf = 0\n", slope, bias, A, B);
  printf("input a point : ");
  scanf("%lf%lf", &pointx, &pointy);
  printf("pointA(%.1lf, %.1lf)\n", pointx, pointy);

  double C = (1 + (A * A));
  double D = pointx + (A * pointy) + B;
  double d;

  printf("|AH vector|^ = d^\n"); /* AP(P는 직선 위의점)벡터와 AH(H는 점과 직선이 수직을 이루는 점)
  벡터의 내적은 AH벡터의 크기 제곱이며 점과 직선사이 최단거리제곱이다. */
  d = fabs(D) / sqrt(C);
  printf("Shortest distance between straight line and point : %.1lf", d);

  return 0;
}