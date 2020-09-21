#include <stdio.h>

void print_digits(int N);

int main() {
	int Num;
	printf("Enter N : ");
	scanf("%d", &Num);
	print_digits(Num);
	return 0;
}

void print_digits(int N) {
	int a, b, c, d, e;
	a = N / 10000;
	N %= 10000;

	b = N / 1000;
	N %= 1000;

	c = N / 100;
	N %= 100;

	d = N / 10;
	e = N % 10;

	printf("10000�� �ڸ� : %d\n", a);
	printf(" 1000�� �ڸ� : %d\n", b);
	printf("  100�� �ڸ� : %d\n", c);
	printf("   10�� �ڸ� : %d\n", d);
	printf("    1�� �ڸ� : %d\n", e);

}