# include <stdio.h>

int main(void)
{
  int integer;
  printf("2 이상의 정수를 입력하세요. : ");
  scanf("%d", &integer);

  int i, j;
  int cnt = 0;
  for (i = 2; i <= integer; i++)
  {
    for (j = 2; j <= i; j++)
    {
      if (i % j == 0)
      {
        if (i > j) break; 
        else
        {
          printf("%5d", i);
          cnt++;
          if (cnt % 5 == 0)
          {
            printf("\n");
          }
        }
      }
    } 
  } 
  return 0;
}