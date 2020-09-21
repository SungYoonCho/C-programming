#include <stdio.h>

int main(void) {
	int N, revN, orgN;

	while (true) {
		printf("Enter a number: ");
		scanf("%d", &N);
		if (N < 0)
			break;
		orgN = N;
		revN = 0;
		while (N > 0) {
			revN = (revN * 10) + N % 10;
			N = N / 10;
		}
		printf("Digit reverse of %d is %d.\n", orgN, revN);
	}
	printf("Bye!");
	return 0;
}

/*
// my solution
int main(void) {
	int N, cnt, Q, R, W, revN;

	while (true) {
		printf("Enter a number: ");
		scanf("%d", &N);
		if (N < 0)
			break;
		Q = N;
		cnt = 0;
		while (Q != 0) {
			Q /= 10;
			cnt++;
		}
		Q = N;
		revN = 0;
		W = 1;
		for (int i = 1; i < cnt; i++)
			W *= 10;
		while (Q != 0) {
			R = Q % 10;
			Q /= 10;
			revN += R * W;
			W /= 10;
		}
		printf("Digit reversal of %d is %d.\n", N, revN);
	}
	printf("Bye!");
}
*/