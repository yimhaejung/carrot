#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_num(); //난수를 받을 함수 선언
int main()
{ 
  int a;
  char ch;
  do
  {
    printf("Front or back (1 or 0) : ");
    scanf("%d", &a);
    if(a == get_num())
    {
       printf("you are right!\n");
    } 
    else
    {
       printf("you are wrong!\n");
    }
    printf("Will you continue? (y or n) : ");
    ch = getchar(); // 문자를 입력받기 위해 getchar()함수 선언(하지않는다면 오류발생)
    scanf("%c", &ch);
    if(ch == 'y')
    {
      continue; //게임 계속
    }
    else if(ch == 'n')
    {
      break; //게임 마무리
    }
    else //ch가 'y'나 'n'이 아니면 문자값을 다시 받을 수 있는 예를 든다
    {
      while((ch != 'y') && (ch != 'n'))
      {
        printf("Will you continue? (y or n) : ");
        ch = getchar(); // 문자를 입력받기 위해 getchar()함수 선언
        scanf("%c", &ch);
      }
    }
  }while(ch != 'n'); //ch가 'n'이 아닐동안 게임 계속 진행
  return 0; 
}
int get_num() //get_num함수의 시작
{
  int num;
  srand(time(NULL));
  num = rand() % 2;

  return num; //num값 반환
}