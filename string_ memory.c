#include <stdio.h>

int main()
{
    /**
     * 1. 숫자 배열
     */
    int a = 1;
    int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);

    printf("%i\n", int_arr[10]);

    /**
     * 2. 문자 배열
     */
    char c = 'a';
    char str1[10] = "Hello\0"; // '\0' --> null character
    char str2[10] = { 'H', 'i' };

    printf("%c\n", c);
    printf("%s\n", str1);
    printf("%s\n", str2);

    printf("%hhi %hhi %hhi %hhi %hhi\n",
    str2[0], str2[1], str2[2], str2[3], str2[4]);
    /**
     * 출력 : 72 105 0 0 0
     * str2[2], str2[3], str2[4] --> 백슬래시('\0') Null 
     */

    /**
     * 문자열에서 백슬래시('\0')를 만나면 더 이상 출력하지 않음.
     */

    char str3[10] = "Hello, World"; // array size is not enough
    /**
     * 출력 : Hello, Wor��
     */
    char str4[20] = "Hello, \0World";
    /**
     * 출력 : Hello, 
     */
    printf("%s\n", str3);
    printf("%s\n", str4); // '\0' 백슬러시를 만나면 다음 문자열은 무시(하지만 메모리에는 저장됨)
    printf("%c\n", str4[10]); // 출력 : r

    return 0;
}