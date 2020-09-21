#include <stdio.h>
#include <math.h>

void main(void) {
	double a, b, c;
	double D, root1, root2;

	printf("Enter a, b, c : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	D = b * b - 4 * a * c;

	if (D > 0.0) {
		D = sqrt(D);
		root1 = (-b + D) / (2 * a);
		root2 = (-b - D) / (2 * a);
		printf("root1 = %.4f and root2 = %.4f", root1, root2);
	}
	else if (D < 0.0) {
		printf("No root exists.");
	}
	else {
		D = sqrt(D);
		root1 = -b / (2 * a);
		printf("single root = %.4f", root1);
	}
}