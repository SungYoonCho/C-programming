#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int range;

	srand(time(NULL));

	printf("%.6f\n", (double)rand() / RAND_MAX);
	printf("%.6f\n", (double)rand() / RAND_MAX);
	printf("%.6f\n", (double)rand() / RAND_MAX);

	return 0;
}