#include <stdio.h>
#include <stdbool.h>

int main() 
{
   int i;
//    i = 5;
//    i == 5;
//    5 = i;
//    5 == i;

   while (i = 5) // 5 로 대입하는 걸로 판단해서 return 5 로 true 로 판단함(C 언어의 개발자에게 권한을 많이 줌)
   {    }
   while (i == 5)
   {    }
    _Bool boolean_true = (2 > 1);
    _Bool boolean_false = (1 > 2);

    printf("True is %d\n", boolean_true);
    printf("False is %d\n", boolean_false);

    printf(boolean_true ? "true" : "false");
    printf("\n");
    printf(boolean_false ? "true" : "false");

    bool bt = true;
    bool bf = false;

    printf("\n");
    printf("True is %d", bt);
    printf("False is %d", bf);
}