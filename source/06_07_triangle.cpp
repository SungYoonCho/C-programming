#include <stdio.h>

int main(void) {
	int n;

	while (1) {
		printf("Enter a number N (0 < N < 10) : ");
		scanf("%d", &n);

		if (n <= 0)
			break;
		else if (n >= 10) {
			printf("N must be <= 9.\n");
			continue;
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%d", j);
			}
			printf("\n");
		}
	}
	printf("Bye!");
}