#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Weekly_Sales(int minr, int maxr);

int main(void) {
	int i, N, minr, maxr;

	srand(time(NULL));
//	printf("Enter # of weeks : ");
	scanf("%d", &N);
//	printf("Enter min and max sales : ");
	scanf("%d %d", &minr, &maxr);

	for (i = 0; i < N; i++) {
		Weekly_Sales(minr, maxr);
	}
}

void Weekly_Sales(int minr, int maxr) {
	int i, range = maxr - minr + 1;

	for (i = 0; i < 7; i++)
		printf("%d ", rand() % range + minr);

	printf("\n");
}