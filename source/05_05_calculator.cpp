#include <stdio.h>

void main(void) {
	char op;
	double a, b;

	printf("Enter an operator (+, -, *, /, %%): ");
	scanf("%c", &op);
	printf("Enter two operands: ");
	scanf("%lf %lf", &a, &b);

	switch (op) {
		case '+':
			printf("%.2lf + %.2lf = %.2lf", a, b, a + b);
			break;
		case '-':
			printf("%.2lf - %.2lf = %.2lf", a, b, a - b);
			break;
		case '*':
			printf("%.2lf * %.2lf = %.2lf", a, b, a * b);
			break;
		case '/':
			printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
			break;
		case '%':
			if ((double) (int)a != a || (double) (int)b != b)
				printf("Error! the operands must be integers.");
			else
				printf("%d %% %d = %d", (int)a, (int)b, (int)a % (int)b);
			break;
		default :
			printf("Error! operator is not correct");
	}
}