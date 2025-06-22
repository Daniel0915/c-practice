#include <stdio.h>

int main()
{
    printf("Integer division\n");
    printf("%d\n", 14 / 7);
    printf("%d\n", 7 / 2);
    printf("%d\n", 7 / 3);
    printf("%d\n", 7 / 4);
    printf("%d\n", 8 / 4);

    printf("Truncating toward zero (C99)\n");
    printf("%d\n", -7 / 2);
    printf("%d\n", -7 / 3);
    printf("%d\n", -7 / 4);
    printf("%d\n", -8 / 4);

    printf("\nFloating divisions\n");
    printf("%f\n", 9.0 / 4.0);
    printf("%f\n", 9.0 / 4); // Note : 4 is interger
    /*
    - cpu 는 다른 타입끼리는 연산할 수 없음
    - 그래서 4 를 float 변환해서 연산해줌
    - 되도록이면 동일한 타입끼리 연산해줘야함
    */

    return 0;
}