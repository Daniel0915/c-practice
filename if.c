#include <stdio.h>


int main() 
{
   char ch;
   while ((ch = getchar()) != '\n') // 문자열이 끝이구나 아는 조건
   {
      // for (int i = '0'; i <= '9'; ++i)
      //    if (ch == i)
      //       ch = '*';
      // 소문자 -> 대문자로
      if (ch >= 'a' && ch <= 'z')
         ch -= 'a' - 'A';
      else if (ch >= 'A' && ch <= 'Z')
         ch += 'a' - 'A';
      
      
      putchar(ch);
   }
   return 0;
}