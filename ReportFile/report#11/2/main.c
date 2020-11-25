#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE *afp, *bfp, *cfp;
  char word1[10][20];
  char word2[10][20];
  int count1 = 0, count2 = 0;
  int i, j;


  afp = fopen("a.txt", "r");
  if(afp == NULL)
  {
    printf("파일을 찾을 수 없습니다.\n");
    exit(1);
  }

  bfp = fopen("b.txt", "r");
  if(bfp == NULL)
  {
    printf("파일을 찾을 수 없습니다.\n");
    exit(1);
  }

  cfp = fopen("c.txt", "w");
  if(cfp == NULL)
  {
    printf("파일을 찾을 수 없습니다.\n");
    exit(1);
  }

  i = 0;
  while (!feof(afp))
  {
    fscanf(afp, "%s", word1[i]);
    count1++;
    i++;
  }

  i = 0;
  while (!feof(bfp))
  {
    fscanf(bfp, "%s", word2[i]);
    count2++;
    i++;
  }
  for (i = 0; i < count2; i++)
  {
    for (j = 0; j < count1; j++)
    {
      if (strcmp(word2[i], word1[j]) == 0) break;
    }
    if(j == count1)
    {
      fprintf(cfp, "%s\n", word2[i]);
    }
  }
  fclose(afp);
  fclose(bfp);
  fclose(cfp);

  return 0;
}