#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define  size 4
#define range 9

void Genrandom()
{
  srand(time(NULL));
  return;
}

int Genrannum(int nrange)
{
  int res = 0;
  int num = rand();
  res = num % nrange;
}

int main(void)
{
  Genrandom();
  int ballrannum[size];
  for(int k = 0; k < 20; k++)
  {
    for(int i = 0; i < size; i++)
    {
      ballrannum[i] = Genrannum(range);
      for(int j = 0; j < i; j++)
      {
        if(ballrannum[i] == ballrannum[j])
        {
          i--;
        }
      }
      printf("random number : %d\n", Genrannum(2));
    }
    printf("\n");
  }
  
  
  for(int i = 0; i < size; i++)
  {
    printf("random number[%d]:%d\n", i, ballrannum[i]);
  }
  printf("\n");

}

