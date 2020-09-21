#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int range;

	srand(time(NULL));
	range = (20 - 10) + 1;

	printf("%d\n", rand() % range + 10);
	printf("%d\n", rand() % range + 10);
	printf("%d\n", rand() % range + 10);
	return 0;
}
