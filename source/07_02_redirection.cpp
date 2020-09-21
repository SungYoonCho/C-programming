#include <stdio.h>

void main(void) {
	int x, y;

	while (scanf("%d %d", &x, &y) != EOF) {
		printf("%d + %d = %d\n", x, y, x + y);
	}
}