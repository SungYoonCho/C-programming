#include <stdio.h>

int main(void) {
	int array[100], idx, c, n, value;

	printf("Enter number of elements : ");
	scanf("%d", &n);

	printf("Enter %d elements\n", n);
	for (c = 0; c < n; c++)
		scanf("%d", &array[c]);

	while (true) {
		printf("\nEnter the index where to insert(-1 to exit) : ");
		scanf("%d", &idx);
		if (idx < 0)
			break;

		printf("Enter the value to insert : ");
		scanf("%d", &value);

		for (c = n - 1; c >= idx; c--)
			array[c + 1] = array[c];

		array[idx] = value;
		n++;

		printf("Resultant array is\n");
		for (c = 0; c < n; c++)
			printf("%d ", array[c]);
		printf("\n");
	}
	printf("Bye!");
	return 0;
}