# include <stdio.h>

int main(void)
{
 int year;

 printf("Enter the year : ");
 scanf("%d", &year);

 if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) // 윤년은 4로 나눠지되 동시에 100으로 나눠지면 안되며, 400으로 나눠져도 된다.
 {
   printf("It is a leap year\n");
 }
 else
 {
   printf("It isn't a leap year\n");
 }
 return 0;
}