#include <stdio.h>

double average(int size, int* fary);
int max_sales_day(int* sales);

int main(void) {
	int w = 0, avrg, sales[7];
	const char* wday[7] = { "sun", "mon", "tue", "wed", "thu", "fri", "sat" };

	printf("week\tsun\tmon\ttue\twed\tthu\tfri\tsat\tavrg\n");
	while (true) {
		for (int i = 0; i < 7; i++)
			if (scanf("%d", &sales[i]) == EOF)
				return 0;

		avrg = (int)average(7, sales);
		printf("%d\t", ++w);
		for (int i = 0; i < 7; i++)
			printf("%d\t", sales[i]);
		printf("%d\t%s\n", avrg, wday[max_sales_day(sales)]);
	}
}

double average(int size, int* fary) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += fary[i];
	return ((double)sum / size);
}

int max_sales_day(int* sales) {
	int max_val = sales[0], day = 0;
	for (int i = 1; i < 7; i++) {
		if (max_val < sales[i]) {
			max_val = sales[i];
			day = i;
		}
	}
	return day;
}