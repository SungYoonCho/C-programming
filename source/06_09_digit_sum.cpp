#include <stdio.h>

void main(void) {
	int N, R;
	int cnt, digit_sum;
	
	while (true) {
		printf("Enter a number : ");
		scanf("%d", &N);
		if (N <= 0)
			break;
		cnt = digit_sum = 0;
		while (N != 0) {
			R = N % 10;
			N /= 10;
			cnt++;
			digit_sum += R;
		}
		printf("number of digits = %d\n", cnt);
		printf("digits sum = %d\n", digit_sum);
	}
	printf("Bye!");
}