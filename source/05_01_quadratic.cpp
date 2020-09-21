#include <stdio.h>
#include<math.h>

#define DELTA 1.0e-10

void main(void) {
	double a, b, c;
	double D, a2, root1, root2;

	printf("Enter a, b, c : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	D = b * b - 4 * a * c;
	a2 = 2 * a;

	if (D > DELTA) {
		D = sqrt(D);
		root1 = (-b + D) / a2;
		root2 = (-b - D) / a2;
		printf("root1 = %.4f and root2 = %.4f", root1, root2);
	}
	else if (fabs(D) <= DELTA)
		printf("a single root = %.4f", -(b / a2));
	else
		printf("No root exists.");
}