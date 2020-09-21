#include <stdio.h>

void main(void) {
	int input;

	printf("Enter an integer : ");
	scanf("%d", &input);

	if (input % 2 == 0 && input % 3 == 0)
		printf("%d is even and divisible by 3.", input);
	else if (input % 2 != 0 && input % 3 == 0)
		printf("%d is odd and divisible by 3.", input);
	else if (input % 2 != 0 && input % 3 != 0)
		printf("%d is odd but not divisible by 3.", input);
	else
		printf("%d is even but not divisible by 3.", input);
}