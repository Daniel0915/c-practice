#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int chgDollar();

int main() {
    int i = 0, j = 0, sum = 0; // 항상 먼저 데이터 초기화

    printf("Input two integers\n");

    scanf("%d %d", &i, &j); // & :  ampersand(주소값 전달)

    sum = i + j;
    printf("%d plus %d = %d\n", i,j, sum);
    
    chgDollar();
    return 0;
}

int chgDollar() 
{
    float won = 0.0f;
    float dollar = 0.0f;

    printf("Input Won\n");
    scanf("%f", &won);

    dollar = won * 0.00089f;

    printf("Dollar = %f\n", dollar);
    return dollar;
}