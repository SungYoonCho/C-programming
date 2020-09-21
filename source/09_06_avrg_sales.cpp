#include <stdio.h>

double average(int size, int* fary);

int main(void) {
	int w = 0, avrg, sales[7];
	printf("week\tsun\tmon\ttue\twed\tthu\tfri\tsat\tavrg\n");
	w = 1;
	while (true) {
		for (int i = 0; i < 7; i++)
			if (scanf("%d", &sales[i]) == EOF)
				return 0;


		avrg = (int) average(7, sales);
		printf("%d\t", ++w);
		for (int i = 0; i < 7; i++)
			printf("%d\t", sales[i]);
		printf("%d\n", avrg);
	}
}

double average(int size, int* fary) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += fary[i];
	return ((double)sum / size);
}