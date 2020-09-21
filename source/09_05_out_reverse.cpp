#include <stdio.h>

int main(void) {
	int N, num[20];
	printf("Enter N(<=20) : ");
	scanf("%d", &N);
	printf("Enter %d numbers\n", N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = N - 1; i >= 0; i--) {
		printf("%d ", num[i]);
	}
}