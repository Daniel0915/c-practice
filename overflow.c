#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    // 0b -> binary 라는 것을 표현(이진수)
    unsigned int i = 0b11111111111111111111111111111111;
    unsigned int u_max = 0 - 1;
    // 10000 - 1 = 1111

    unsigned int u_min = 0;
    signed int i_max = INT_MAX;
    signed int i_min = INT_MIN;

    // i to binary representation
    // char buffer[33];
    // _itoa(u_max, buffer, 2);

    // print decial and binary
    printf("decimal: %u\n", u_max);
    // printf("binary: %s\n", buffer);


    // printf("%u\n", i);
    printf("%u\n", u_max);
    // printf("%u\n", u_min);
    // printf("%d\n", i_max);
    // printf("%d\n", i_min);

    // printf("%u\n", sizeof(unsigned int)); => 4
    // printf("%u\n", sizeof(i)); => 4
    return 0;
}