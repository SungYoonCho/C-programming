#include <stdio.h>
//#include <math.h>

double poly5(double x);

int main() {
	double x, y;
	printf("Enter x : ");
	scanf("%lf", &x);
	y = poly5(x);
	printf("y = %.2f", y);
	return 0;
}

double poly5(double x) {
	// teaching soulution
	int y, t;

	t = x * x;
	y = t - 7;

	t *= t;
	y -= t;

	t *= x;
	y += t;

	return y;




	// my soulution
	/*
	double a, b, c, y;
	a = pow(x, 5);
	b = pow(x, 4);
	c = pow(x, 2);
	y = a - b + c - 7;
	*/
	return y;
}