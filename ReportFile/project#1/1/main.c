#include <stdio.h>
#include <math.h>
#define a   (double)180 // 코드가 복잡해지는걸 막기위해 180의 실수화 define
int main(void)
{
  double deg, value; 
  int res; 

  printf("Enter an angle : ");
  scanf("%lf", &deg); 

  value = fmod(deg, a);
  res = (int)deg / (int)a; // res가 홀수인지 짝수인지 판단하기 위해 deg, a 정수화하여 나눗셈

  if ((deg >= -a) && (deg <= a)) // deg가 -180이상 180이하의 값이면 그대로 deg출력
  {
    printf("posture value : %.4lf", deg); //소수 넷째자리까지 출력
  }
  else if (deg < -a) // deg가 -180미만일 대
  {
    if (res % 2 == -1) // res를 2로 나눈 값이 -1(deg가 -값이기 때문에)이면 deg를 a로 나눈 값(=res)은 홀수
    {
      printf("posture value : %.4lf", (a + value)); // res가 홀수이면 180에 deg를 180으로 나눈 나머지를 더해 출력
    }
    else // res는 짝수
    {
      printf("posture value : %.4lf", value); // res가 홀수이면 deg를 180으로 나눈 나머지 그대로 출력
    }  
  }
  else // deg가 180 초과일 때
  {
    if (res % 2 == 1) 
    {
      printf("posture value : %.4lf", (-a + value)); // res가 홀수이면 -180에 deg를 180으로 나눈 나머지를 더해 출력
    }
    else 
    {
      printf("posture value : %.4lf", value); 
    }
  } 
return 0;
}