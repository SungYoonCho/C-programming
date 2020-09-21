#include <stdio.h>

int main(void) {
	double F1, F2, F3, F4, F5, C1, C2, C3, C4, C5;

	F1 = 0;
	C1 = (5. / 9) * (F1 - 32);
	printf("%f F -> %f C\n", F1, C1);

	F2 = 20;
	C2 = (5. / 9) * (F2 - 32);
	printf("%f F -> %f C\n", F2, C2);

	F3 = 40;
	C3 = (5. / 9) * (F3 - 32);
	printf("%f F -> %f C\n", F3, C3);

	F4 = 60;
	C4 = (5. / 9) * (F4 - 32);
	printf("%f F -> %f C\n", F4, C4);

	F5 = 80;
	C5 = (5. / 9) * (F5 - 32);
	printf("%f F -> %f C\n", F5, C5);

	return 0;
}