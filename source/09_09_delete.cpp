#include <stdio.h>

int main(void) {
	int array[100], idx, c, n;

	printf("Enter number of elements : ");
	scanf("%d", &n);

	printf("Enter %d elements\n", n);
	for (c = 0; c < n; c++)
		scanf("%d", &array[c]);

	while (true) {
		printf("\nEnter the index where to delete(-1 to exit) : ");
		scanf("%d", &idx);
		if (idx < 0)
			break;

		for (c = idx + 1; c < n; c++)
			array[c - 1] = array[c];
		n--;

		printf("Resultant array is\n");
		for (c = 0; c < n; c++)
			printf("%d ", array[c]);
		printf("\n");
	}
	printf("Bye!");
	return 0;
}