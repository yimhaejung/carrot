#include <stdio.h>
#include <stdlib.h>
#include "student.h"

#define PI   3.141592
#define YIM   2019010777  

int main(void)
{
	studendt student1 = { YIM, "haejung" };
  printf("a:%lf, No.:%d, Name:%s\n", PI, student1.num, student1.name);
  system("pause..");
  return 0;
}