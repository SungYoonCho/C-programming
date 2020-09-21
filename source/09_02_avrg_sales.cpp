#include <stdio.h>

int main(void) {
	int sun, mon, tue, wed, thu, fri, sat;
	int w, avrg;
	printf("week\tsun\tmon\ttue\twed\tthu\tfri\tsat\tavrg\n");
	w = 1;
	while (scanf("%d %d %d %d %d %d %d", &sun, &mon,
		&tue, &wed, &thu, &fri, &sat) != EOF) {

		avrg = (sun + mon + tue + wed + thu + fri + sat) / 7;
		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
			w, sun, mon, tue, wed, thu, fri, sat, avrg);
		++w;
	}
}