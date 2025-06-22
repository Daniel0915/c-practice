#include <stdio.h>

// 나머지 연산자
int main()
{
    const int HOUR = 3600;
    const int MIN = 60;
    int seconds = 0, minutes = 0, hours = 0;

    while (seconds >= 0)
    {
        printf("Input seconds : ");
        scanf("%d", &seconds);

        if (seconds < 0) {
            break;
        }

        hours = seconds / HOUR;
        seconds %= HOUR;

        minutes = seconds / MIN;
        seconds %= MIN;

        printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
    }

    printf("Good bye\n");

    int div, mod;

    div = -11 / -5;
    mod = -11 % -5; // first operand is negatvie(첫번째 인자의 부호에 따라 반환 양수/음수가 결정됨)
    printf("div = %d, mod = %d\n", div, mod); // mod -1

    div = -11 / 5;
    mod = -11 % 5;
    printf("div = %d, mod = %d\n", div, mod); // mod -1

    return 0;
}