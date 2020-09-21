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

int max_sales_day(int sun, int mon, int tue, int wed, int thu,
	int fri, int sat) {
	int max_val = sun, day = 1;

	if (max_val < mon) {
		max_val = mon; day = 2;
	}
	if (max_val < tue) {
		max_val = tue; day = 3;
	}
	if (max_val < wed) {
		max_val = wed; day = 4;
	}
	if (max_val < thu) {
		max_val = thu; day = 5;
	}
	if (max_val < fri) {
		max_val = fri; day = 6;
	}
	if (max_val < sat) {
		max_val = sat; day = 7;
	}
	return day;
}


void print_max_day(int d) {
	switch (d) {
		case 1 :
			printf("sun");
			return;
		case 2:
			printf("mon");
			return;
		case 3:
			printf("tue");
			return;
		case 4:
			printf("wed");
			return;
		case 5:
			printf("thu");
			return;
		case 6:
			printf("fri");
			return;
		case 7:
			printf("sat");
			return;
	}
}