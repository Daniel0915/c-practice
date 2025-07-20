#include <stdio.h>

void display(char cr, int lines, int width);

int main() {
  char c;
  int rows, cols;

  while (1) {
    scanf("%c %d %d", &c, &rows, &cols); // scanf 는 백슬래시를 버퍼에 남겨놓음
    while (getchar() != '\n') // '\n' 이 나올 떄까지 버퍼에 남은 모든 문자들을
                              // 읽어서 비워줍니다.
      continue;
    display(c, rows, cols);
    if (c == '\n')
      break;
  }

  // 종료를 명시적으로 끝내는 코드
  printf("Input one character and two integers:\n");
  while ((c = getchar() != '\n')) {
    scanf("%d %d", &rows, &cols);
    display(c, rows, cols);
    printf("Input another character and two integers:\n");
    printf("Press Enter to quit.\n");
  }

  return 0;
}

void display(char cr, int lines, int width) {
  for (int row = 0; row < lines; row++) {
    for (int col = 0; col < width; col++) {
      printf("%c", cr);
    }
    printf("\n");
  }
}