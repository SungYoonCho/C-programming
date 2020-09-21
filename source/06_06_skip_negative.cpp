#include <stdio.h>

int main(void) {
	double num, i = 0, sum = 0.0;
	while (1) {
		printf("Enter a number: ");
		scanf("%lf", &num);
		if (num < 0)
			continue;
		else if (num > 0) {
			sum += num;
			i++;
		}
		else {
			break;
		}
	}
	if (i == 0)
		printf("No numbers are added.");
	else if (i == 1)
		printf("Only one positive number %.2f is entered.", sum);
	else
		printf("Sum of %.f numbers = %.2f, Average = %.2f.", i, sum, sum / i);
}