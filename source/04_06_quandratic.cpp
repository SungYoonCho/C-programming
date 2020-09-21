#include <stdio.h>
#include <math.h>

void main() {
	double a, b, c;
	double D, root1, root2;

	printf("Enter a, b, c : ");
	scanf("%lf% lf %lf", &a, &b, &c);

	D = sqrt(b * b - 4 * a * c);
	root1 = (-b + D) / (2 * a);
	root2 = (-b - D) / (2 * a);

	printf("root1 = %.4f and root2 = %.4f\n", root1, root2);
}