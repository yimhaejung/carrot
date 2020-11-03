#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
  int computer[4]; // 컴퓨터가 저장할 int형 배열
  int user1[4]; // 사용자가 저장할  int형 배열
  int user2[4];
  int strike1, strike2, out1;
  int ball1, ball2, out2;
  int i, j;
  int game;
  
  srand(time(NULL));
  for(i = 0; i < 4; i++)
  {
    game = rand() % 10; // 0~9까지 난수선언
    computer[i] = game;
    for(j = 0; j < 4; j++)
    {
      if((game == computer[j]) && (i != j))
      {
        i--;
      }
    }
  }

  while(1)
  {
    printf("Enter four numbers from 1 to 9 : ");
    scanf("%d%d%d%d", &user1[0], &user1[1], &user1[2], &user1[3]);
    printf("Enter four numbers from 1 to 9 : ");
    scanf("%d%d%d%d", &user2[0], &user2[1], &user2[2], &user2[3]);
    for(i = 0; i < 4; i++)
    {
      for(j = 0; j < 4; j++)
      {
        if(computer[i] == user1[j])
        {
          if(i == j)// 같은 위치일 경우 스트라이크 개수 증가
          {
            strike1++;
          }
          else// 다른 위치일 경우 볼 개수 증가
          {
            ball1++;
          }
        }
        else
        {
          out1++;
        }
        printf("user1 strike : %d,ball : %d, out : %d", strike1, ball1, out1);
        if(computer[i] == user2[j])
        { 
          if(i == j)// 같은 위치일 경우 스트라이크 개수 증가
          {
            strike2++;
          }
          else// 다른 위치일 경우 볼 개수 증가
          {
            ball2++;
          }
        }
        else
        {
          out2++;
        }
        
        printf("user2 strike : %d,ball : %d, out : %d", strike2, ball2, out2);
      } 
    }
    if(out1 < out2)
    {
      printf("The first batter win!");
      break;
    }
    else
    { 
      printf("The first batter lost Answer : %d%d%d%d\n", computer[0], computer[1], computer[2], computer[3]); 
      break; 
    } 
    if(out1 > out2)
    {
      printf("The second batter win!");
      break;
    }
    else
    { 
      printf("The second batter lost Answer : %d%d%d%d\n", computer[0], computer[1], computer[2], computer[3]); 
      break; 
    } 
  }
  return 0;
}
