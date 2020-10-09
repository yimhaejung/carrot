#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_num();
int main()
{ 
  int a;
  char ch;
  do
  {
    printf("Front or back (1 or 0) : ");
    scanf("%d", &a);
    if (a == get_num())
    {
      printf("you are right!\n");
    }
    else
    {
      printf("you are wrong!\n");
    }
    printf("Will you continue? (y or n) : ");
    scanf("%c", &ch);
  }while(ch != 'n');
  return 0; 
}
int get_num()
{
  int num;
  srand(time(NULL));
  num = rand() % 2;
  return num;
}