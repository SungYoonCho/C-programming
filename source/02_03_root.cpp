#include <stdio.h>
#include <math.h>

int main(void) {
	double a = 1, b = 0, c = -1;

	double D, root1, root2;
	D = b * b - 4 * a * c;
	D = sqrt(D);
	root1 = (-b + D) / (2 * a);
	root2 = (-b - D) / (2 * a);
	printf("a = %f, b = %f, c = %f\n", a, b, c);
	printf("root1 = %f, root2 = %f", root1, root2);
	return 0;
}