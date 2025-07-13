#include <float.h>
#include <stdio.h>

// 7.12 다중선택 switch와 break
int main() {
  char c;
  while ((c = getchar()) != '.') {
    printf("You love ");

    switch (c) {
    case 'a':
    case 'A':
      printf("apple");
      break;
    case 'b':
    case 'B':
      printf("baseball");
      break;
    case 'c':
    case 'C':
      printf("cake");
      break;
    default:
      printf("nothing");
    }

    printf(".\n");

    // 첫줄 읽는 기능
    while (getchar() != '\n')
      continue;
  }

  return 0;
}