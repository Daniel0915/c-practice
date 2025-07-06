#include <stdio.h>
#include <string.h>

#define NUMS_ROWS 5
#define FIRST_CHAR 'A'
#define LAST_CHAR 'K'

// 6. 15 중첩된 루프들
int main() 
{
	int r;
	int c;

	for (r = 0; r < NUMS_ROWS; ++r) {
		for (c = FIRST_CHAR; c <= LAST_CHAR; ++c) {
			printf("%c ", c);
		}
		printf("\n");
	}

   return 0;
}