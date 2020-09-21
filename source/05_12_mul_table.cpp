#include <stdio.h>

int main(void) {
	int num, i;

	printf("Enter an integer: ");
	scanf("%d", &num);
	if (num > 0 && num < 10) {
		for (i = 1; i < 10; i++) {
			printf("%d * %d = %2d", num, i, num * i);
			if (i < 9)
				printf("\n");
		}
		return 0;
	}
	else {
		printf("%d is out of range.", num);
		return 0;
	}
}