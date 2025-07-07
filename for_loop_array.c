#include <stdio.h>

#define SIZE 5

int main() 
{
   /* Motivation */
   int i1 = 0;
   int i2 = 1;
   int i3 = 2;

   int my_arr[SIZE];

   for (int i = 0; i < SIZE; i++) {
      my_arr[i]= i * i;
   }

   for (int i = 0; i < SIZE; i++) {
      printf("%d ", my_arr[i]);
   }

   return 0;
}