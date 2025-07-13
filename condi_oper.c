#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int temp;
    temp = true ? 1024 : 7; // ternar(삼항 연산자)
    printf("%d\n", temp);

    temp = false ? 1024 : 7;

    int a = 1, b = 2;
    int max = (a > b) ? a : b;

    int number;
    scanf("%d", &number);
    const bool is_even = (number % 2 == 0) ? true : false; // 대부분의 경우 괄호를 만들어줌
    if (is_even)
        printf("Even");
    else
        printf("Odd");

    (number % 2 == 0) ? printf("Even") : printf("Odd"); // 코드 한줄로 줄이기(잘 쓰이지는 않음)
    return 0;
}