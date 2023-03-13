#include <stdio.h>

int main() {
   int x, y, z;
   int max, min;

   printf("Enter three numbers: ");
   scanf("%d%d%d", &x, &y, &z);

   if (x > y) {
      if (x > z)
         max = x;
      else
         max = z;
   } else {
      if (y > z)
         max = y;
      else
         max = z;
   }

   if (x < y) {
      if (x < z)
         min = x;
      else
         min = z;
   } else {
      if (y < z)
         min = y;
      else
         min = z;
   }

   printf("Max is: %d\n", max);
   printf("Min is: %d\n", min);

   return 0;
}
