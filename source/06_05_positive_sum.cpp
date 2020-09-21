#include <stdio.h>

int main(void) {
	int breakFlag = 0;
	double num, sum = 0.0;
	while (!breakFlag) {
		printf("Enter a number: ");
		scanf("%lf", &num);
		if (num < 0)
			breakFlag = 1;
		else {
			sum += num;
		}
	}
	printf("\nSum = %.2f", sum);

	return 0;
}