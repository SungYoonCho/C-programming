#include <stdio.h>

void print_max_day(int d);
int max_sales_day(int sun, int mon, int tue, int wed, int thu,
	int fri, int sat);

int main(void) {
	int w, max_day, avrg;
	int sun, mon, tue, wed, thu, fri, sat;
	printf("week\tsun\tmon\ttue\twed\tthu\tfri\tsat\tavrg\tmax day\n");
	w = 1;
	while (scanf("%d %d %d %d %d %d %d", &sun, &mon,
		&tue, &wed, &thu, &fri, &sat) != EOF) {

		avrg = (sun + mon + tue + wed + thu + fri + sat) / 7;
		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t",
			w++, sun, mon, tue, wed, thu, fri, sat, avrg);
		max_day = max_sales_day(sun, mon, tue, wed, thu, fri, sat);

		print_max_day(max_day);
		printf("\n");
	}
}