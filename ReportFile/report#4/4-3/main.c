# include <stdio.h>

int main(void)
{
  int i, j, a, row;

  printf("enter an integer, a number of row : ");
  scanf("%d%d", &a, &row);

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < a; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  if (a == 0 || row ==0)
  {
    printf("* Cannot be printed");
  }
  return 0;
}