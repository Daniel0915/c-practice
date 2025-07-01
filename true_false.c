#include <stdio.h>

int main() 
{
    int i = 5;

    /*
    - 0 이 아니면 모두 true 
    - 해당 트릭을 가지고 C/C++ 많이 사용함
    */
    while (i)
    {
        printf("%d is true\n", i--);
    }
    printf("%d is false\n", i);
    
}