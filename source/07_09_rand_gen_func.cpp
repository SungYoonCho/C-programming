#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_gen(int* x, int* y, int* z, int min, int max);

int main(void) {
	int N;
	int min, max;
	int a, b, c;
	double average;

	printf("Enter min & max of random numbers: ");
	scanf("%d %d", &min, &max);
	printf("How many times to repeat? ");
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		average = rand_gen(&a, &b, &c, min, max);
		printf("\n%3d. average(%d, %d, %d) = %.2f", i, a, b, c, average);
	}

	return 0;
}

double rand_gen(int* x, int* y, int* z, int min, int max) {
	static bool flag = false;
	int range = max - min + 1;

	if (flag == false) {
		srand(time(NULL));
		flag = true;
	}

	*x = rand() % range + min;
	*y = rand() % range + min;
	*z = rand() % range + min;

	return (*x + *y + *z) / 3.0;

}