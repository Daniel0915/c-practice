#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    a++; // a = a + 1 or a += 1;
    printf("%d\n", a);

    ++a; // a = a +1 or a += 1;
    printf("%d\n", a);

    double b = 0;
    b++;
    printf("%f\n", b);

    ++b;
    printf("%f\n", b);

    int count = 0;
    // 2개의 결과가 다름
    // while (++count < 10)
    while (count < 10) // ++count 다르게 예약이라고 생각하면 된다.
    {
        printf("%d ", count++); // ++count or count ++
        // count++ 사용하는 이유는 효율성을 높이기 위함
    }

    int i = 1, j = 1;
    int i_post, pre_j;

    i_post = i++;
    pre_j = ++j;

    printf("%d %d\n", i, j); // 2 2
    printf("%d %d\n", i_post, pre_j); // 1 2

    // 우선순위 : 증가, 감소 연산자 > 곱하기
    int i = 3;
    int l = 2 * --i;
    printf("%d %d\n", i, l); // 2 4

    i = 1;
    l = 2 * i--;
    printf("%d %d\n", i, l); // 0 2

    /* very high precdedence(precdedence 우선 순위가 높음) */
    int x, y, z;
    x = 3, y = 4;
    z = (x + y++) * 5; // (x + (y++))
    printf("%d, %d, %d", x, y ,z); // 3, 5, 35

    /* ++ and -- affect modifiable L-vaues(증가 및 감소 연산자는 수정가능한 L value 에서만 사용할 수 있다, 리터럴이나 상수에는 사용할 수 없음)  */
    int x = 1, y = 1, z;
    z = x * y++; // (x) * (y++), not (x*y)++, (x*y) -> R-value(변경 불가)
    // z = (x * y)++; // error
    // z = 3++; // error
    printf("%d, %d, %d", x, y ,z); // 1, 2, 1

    /* Bad practices(시스템마다 다르게 결과값이 나올 수 있음)
        문제점 : 증가, 감소 연산자를 남발하는 것은 좋지 않다.
        해결방안 : 계산들을 쪼개서 처리
    */
    int n = 1;
    printf("%d %d", n, n, n * n++);
    int x = n / 2 + 5 * (1 + n++);
    int y = n++ + n++;

    return 0;
}