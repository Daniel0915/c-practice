#include <stdio.h>

int main() {
  int c;

  //   while ((c = getchar()) != EOF) // End of File(Ctr + z 로 end file)
  //     putchar(c);

  // stream : 데이터가 흘러서
  // EOF : stream 이 언제 끝나는지 표시하는 것
  while (1) {
    c = getchar();
    printf("%d\n", c);
    if (c == EOF)
      break;
  }
}