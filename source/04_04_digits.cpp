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

	printf("10000의 자리 : %d\n", a);
	printf(" 1000의 자리 : %d\n", b);
	printf("  100의 자리 : %d\n", c);
	printf("   10의 자리 : %d\n", d);
	printf("    1의 자리 : %d\n", e);

}