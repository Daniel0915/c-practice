#include <stdio.h>
#include <inttypes.h>

int main()
{
    /* multiple inputs with blank separators */
    int i;
    float f;
    char str[30];
    scanf("%d %f %s", &i, &f, str); // Note % is absent in front of str
    printf("%d %f %s\n", i, f, str);

    /* character */
    // 빈칸도 입력을 받는다.
    char c;
    scanf("%c", &c); // try blank
    printf("%i\n", c); // blank is 32, output is ASCII 

    /* Unsigned as signed */
    /*
    아래 코드는 -1 을 넣어도 -1 이 나오는데 
    unsinged 양수만 표현해야 하므로 좋지 않은 코드이다.
    */
    unsigned i;
    scanf("%i", &i); // try negative
    printf("%i\n", i);

    /* Unsigned as unsigned */
    /*
    위 코드보다 아래 코드가 깔끔한 코드이다.
    */
    unsigned i2;
    scanf("%u", &i2); // try negative number
    printf("%u\n", i2);

    /* floating point numbers */
    // l for double for %f, %e, %E, %g
    double d = 0.0;
    scanf("%lf", &d);  // lf, try E notation(표기법)
    // scanf("%f", &d);  // warning : format specifies type 'float *' but the argument has type 'double *'
    printf("%f\n", d); // f ==> printf 는 float 이라도 double 출력함

    /* Width */
    char str[30];
    scanf("%5s", str); // width
    printf("%s\n", str);

    /* h modifier */
    char i;
    scanf("%hhd", &i); // try large numbers
    printf("%i\n", i);

    /* integer with characters */
    int i;
    scanf("%i", &i); // try '123ab', '123a456'
    printf("%i\n", i);

    /* j modifier */
    intmax_t i;
    scanf("%ji", &i);
    printf("%ji", i);

    /* Regular characters */
    // int a, b;
    // 글자 , 입력해줘야 작동이 됨
    scanf("%d,%d", &a, &b); // try blank separator only
    scanf("%d ,%d", &a, &b);
    scanf("%d, %d", &a, &b);
    scanf("%d-%d", &a, &b);
    scanf("%dA%d", &a, &b);
    printf("%d %d\n", a, b);

    /* char receives blank */
    int a, b;
    char c;
    scanf("%d%c%d", &a, &c, &b); // try 123 456 (blank)
    printf("%d|%c|%d", a, c, b); // | is separator

    // sentences?, getchar(), fgets(), etc.

    /* return value of scanf() */
    // scanf 도 반환값이 있는데 몇개의 인자를 받았는지 반환함
    int a, b;
    int i = scanf("%d%d", &a, &b);
    printf("%d", i);

    /* *modifier  for printf() */
    // int i = 123;
    // int width = 5; // from script file, scanf, etc
    // printf("Input width : ");
    // scanf("%d", &width);
    // printf("%*d\n", width, i); // * -> blank 생성

    /* *modifier for scanf() */
    int i;
    scanf("%*d%*d%d", &i);
    printf("Your third input = %d", i);
    /*
    [input]
    123
    4545
    555555
    
    [output]
    Your third input = 555555

    줄바꿈으로 구분
    */

    return 0;
}