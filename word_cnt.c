#include <stdio.h>

int main()
{
    /*
    TODO : 
    1. 입력 받은 문자열의 한개씩 출력하기
    */
    printf("Enter text : \n");
   
    char ch;

    int char_cnt = 0, words_cnt = 0, lines_cnt = 1;

    while ((ch = getchar()) != '.')
    {
        if (ch == ' ' || ch == '\n') {
            words_cnt++;
        } else { // ch != ' ' && ch != '\n'
            char_cnt++;
        }

        if (ch == '\n') {
            lines_cnt++;
        }
    }

    printf("\n");

    printf("words_cnt : %d\n", words_cnt);
    printf("char_cnt : %d\n", char_cnt);
    printf("lines_cnt : %d\n", lines_cnt);
    return 0;
}