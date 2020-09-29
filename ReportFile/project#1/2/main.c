# include <stdio.h>

int main(void)
{
 int month;

 printf("Enter the month : ");
 scanf("%d", &month);

 if ((month >= 1) && (month <= 12)) // 계절은 1~12월까지 있음
 {
   if ((month >= 3) && (month <= 5))
   {
   printf("It's spring.");
   }
   else if ((month >= 6) && (month <= 8))
   {
   printf("It's summer.");
   }
   else if ((month >= 9) && (month <= 11))
   {
   printf("It is autumn.");
   }
   else
   {
   printf("It's winter.");
   }
 }
 else
 {
   printf("It's not the season.");
 }
 return 0;
}