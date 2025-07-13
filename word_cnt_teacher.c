#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '.'

int main()
{

    bool word_flag = false;
    bool line_flag = false;
    /*
    TODO : 
    1. 입력 받은 문자열의 한개씩 출력하기
    */
    printf("Enter text : \n");
   
    char ch;

    int char_cnt = 0, words_cnt = 0, lines_cnt = 1;

    while ((ch = getchar()) != STOP)
    {
        if (!isspace(ch))
            char_cnt++;


        if (isspace(ch) && ch == '\n')
            word_flag = true;

        if (word_flag)
            words_cnt++;

        if (!isspace(ch) && !line_flag)
        {
            lines_cnt++;
            line_flag = true;
        }

        if (ch == '\n')
            line_flag = false;

        if (!isspace(ch) && !word_flag)
        {
            words_cnt++;
            word_flag = true;
        }

        if (isspace(ch)) // 단어가 끝났다 라는 flag
            word_flag = false;
    }

    printf("\n");

    printf("words_cnt : %d\n", words_cnt);
    printf("char_cnt : %d\n", char_cnt);
    printf("lines_cnt : %d\n", lines_cnt);
    return 0;
}