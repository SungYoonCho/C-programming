#include <stdio.h>

int main(void) {
	int x, y, z;
	double avrg;

	x = 5;
	y = 12;
	z = 3;
	avrg = (x + y + z) / 3.;

	printf("The average of %d, %d and %d is %f",
		x, y, z, avrg);

	return 0;
}