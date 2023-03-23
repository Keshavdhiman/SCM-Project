#include <stdio.h>
#include <math.h>

int main()
{
  int Num, Temp, Reminder, Times =0, Sum = 0;
 
  printf("\nPlease Enter any num \n");
  scanf("%d", &Num);
  
  Temp = Num;
  
  while (Temp != 0) 
   {
     Times = Times + 1;
     Temp = Temp / 10;
   }
   
   for(Temp = Num; Temp > 0; Temp =  Temp /10 )
   {
     Reminder = Temp % 10;
     Sum = Sum + pow(Reminder, Times);
   }
 
  printf("\nSum = %d\n", Sum);

  if ( Num == Sum )
      printf("\n%d is Armstrong.\n", Num);
  else
      printf("%d is not.\n", Num);
 
  return 0;
}