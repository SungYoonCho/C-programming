#include <stdio.h>

int main(void) {
	char c;
	int i;
	float f;
	double d;

	printf("Enter values of types char int float double \n");
	scanf("%c %d %f %lf", &c, &i, &f, &d);

	printf("c = %c, i = %d, f = %f, d = %f", c, i, f, d);

}