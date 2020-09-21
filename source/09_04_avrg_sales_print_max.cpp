#include <stdio.h>

void print_max_day(int d) {
	switch (d) {
	case 1:
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