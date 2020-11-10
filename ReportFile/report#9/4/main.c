#include <stdio.h>

int main(void)
{
  char str[50], check_char = 0;
  int i, count = 0;

  printf("Enter a string : "); 
  scanf("%s", str);

  for(i = 0; str[i] != 0; i++) //널문자 나올 때까지 반복
  {
    if(check_char != str[i])
    {
      if(count > 0)
      { 
        printf("%c : %d\n", check_char, count);
      }
      check_char = str[i]; // 새로운 문자 저장
      count = 1; //이미 나왔으니 다시 1로 시작
    }
    else
    {
      printf("%c is repeated.\n", check_char);
      count++;
    }
  }
  if(count > 0)
  {
    printf("%c : %d", check_char, count);
  }
  return 0;
}