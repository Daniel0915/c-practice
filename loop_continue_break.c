#include <stdio.h>

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 5)
      continue;

    printf("%d", i);
  }

  /* break */
  for (int i = 0; i < 10; i++) {
    if (i == 5)
      break;

    printf("%d", i);
  }

  /* while and continue */
  int count = 0;
  while (count < 5) {
    int c = getchar();
    if (c == 'a')
      continue;

    putchar(c);
    count++;
  }

  /* continue as as placeholder */
  while (getchar() != '\n') {
    continue;
  }

  /* Need to use continue ? */
  // continue 사용하면 더 명확하게 이해할 수 있다.
  char c;
  while ((c = getchar() != '\n')) {
    if (c == 'a')
      continue;
    putchar(c);
  }

  /* break */
  while (1) {
    char c = getchar();

    if (c == '.')
      break;

    putchar(c);
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (j == 5)
        break;

      printf("(%d %d)", i, j);
    }
  }

  return 0;
}