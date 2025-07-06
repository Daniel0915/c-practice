#include <stdio.h>


int main() 
{
   const int pwd = 1005;
   int input = 0;

   // while (pwd != input)
   // {
   //    printf("Enter secret code : ");
   //    scanf("%d", &input);
   // }

   // printf("Good!");

   do
   {
      printf("Enter secret code : ");
      scanf("%d", &input);
   } 
   while (input != pwd);
   printf("Good!");

   return 0;
}