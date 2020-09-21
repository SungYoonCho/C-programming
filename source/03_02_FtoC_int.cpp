#include <stdio.h>

int main(void) {
	int F, C;

	F = 0;
	C = (5. / 9) * (F - 32);
	printf("%d F -> %d C\n", F, C);

	F = 20;
	C = (5. / 9) * (F - 32);
	printf("%d F -> %d C\n", F, C);
	
	F = 40;
	C = (5. / 9) * (F - 32);
	printf("%d F -> %d C\n", F, C);
	
	F = 60;
	C = (5. / 9) * (F - 32);
	printf("%d F -> %d C\n", F, C);
	
	F = 80;
	C = (5. / 9) * (F - 32);
	printf("%d F -> %d C\n", F, C);

	return 0;
}