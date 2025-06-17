#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strlen and more

int main()
{
    char str1[100] = "Hello";
    char str2[] = "Hello";
    char str3[100] = "\0";
    char str4[100] = "\n";

    // 참고 사항: zu 가 지원을 안해주는 컴파일러 존재
    printf("%zu %zu\n", sizeof(str1), strlen(str1));
    printf("%zu %zu\n", sizeof(str2), strlen(str2));
    printf("%zu %zu\n", sizeof(str3), strlen(str3));
    printf("%zu %zu\n", sizeof(str4), strlen(str1));

    /* Extra 동적 할당 */
    char *str5 = (char*)malloc(sizeof(char) * 100);
    str5[0] = 'H';
    str5[1] = 'e';
    str5[2] = 'l';
    str5[3] = 'l';
    str5[4] = 'o';
    str5[5] = '\0';
    printf("%zu %zu\n", sizeof(str5), strlen(str5));
    return 0;
}