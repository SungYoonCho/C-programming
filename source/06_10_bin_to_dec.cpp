#include <stdio.h>

void main(void) {
	int N, Q, R, D, W, invalid;

	while (true) {
		printf("Enter a binary number : ");
		scanf("%d", &N);
		if (N <= 0)
			break;
		D = invalid = 0; 
		Q = N;
		W = 1;
		while (Q != 0) {
			R = Q % 10;
			if (R > 1) {
				invalid = 1;
				break;
			}
			Q /= 10;
			D += R * W;
			W *= 2;
		}
		if (invalid == 1) {
			printf("%d is not a binary number.\n", N);
			continue;
		}
		printf("Decimal value is %d\n", D);
	}
	printf("Bye!");
}