#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main(void) {
	int x, y, z;
	float avrg;

	printf("Enter three numbers : ");
	scanf("%d %d %d", &x, &y, &z);
	avrg = (x + y + z) / 3.;

	printf("The average of %d, %d and %d is %.2f",
		x, y, z, avrg);


	return 0;
}