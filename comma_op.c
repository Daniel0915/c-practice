#include <stdio.h>

// 6. 11 콤마 연산자
int main() 
{
   for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n *n) {
      printf("%d %d\n", n, nsqr);
   }

   // comma 기능

   /*
   comma 기능
   1. separators 분리
   2. comma 도 시퀀스 포인트(== ;)
   3. comma 연산자임
   */

   // comma 도 시퀀스 포인트(== ;)
   int i,j;
   i = 1;
   i++, j = i;
   printf("%d %d\n", i, j);
   // 출력 : 2 2

   int my_money = (123, 456);
	printf("%d\n", my_money);
   // 출력 456

   

   


   return 0;
}