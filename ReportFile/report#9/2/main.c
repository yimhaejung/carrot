#include <stdio.h>

int main(void)
{
  char ch;
  int count = 0;
  int temp = 0;
  while((scanf("%c", &ch)) != -1) // Ctrl + Z입력시 종료
  {
    if(ch != '\n') // ch가 개행 문자가 아닐 때까지 count증가
    {
      count++;
    }
    else // 이전 단어와 입력한 단어의 길이 비교
    {
      if(temp < count)
      {
        temp = count;
        count = 0;
      }
    }
  }
  printf("가장 긴 단어의 길이 : %d", temp);
  return 0;
}