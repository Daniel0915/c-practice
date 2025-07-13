#include <stdio.h>
#include <ctype.h> // isSlower()
#include <stdbool.h>
#include <iso646.h> // and, or, not

int main() 
{

   int x = 1, y = 2;

   // x++ -> 1
   // x + y -> x 는 2 
   if (x++ > 0 && x + y == 4)
      printf("%d %d\n", x, y);

   /*  
   범위 지정시, 주의사항
   2번과 같이하면 안됨
   */

   // 1
   for (int i = 0; i < 100; i++)
      if (i >= 10 && i <= 20)
         printf("%d ", i);
   
   printf("\n");

   // 2
   for (int i = 0; i < 100; i++)
      if (10 <= i <= 20) // Note : if((10 <= i) <= 20)
         printf("%d ", i);

   
   /*
   ctype.h 의 islower 사용하는 것이 가독성이 좋다
    */
   for (char c = -128; c < 127; c++)
      if (c >= 'a' && c <= 'z')
         printf("%c ", c);
   
   printf("\n");

   for (char c = 0; c < 17; ++c)
      if (islower(c))
         printf("%c ", c);

   return 0;
}