#include <stdio.h>

int main(void) {
	int grade;
	double usage, amount, total;
	while (1) {
		printf("����� ��ް� ���� ��뷮�� �Է��Ͻÿ�: ");
		scanf("%d %lf", &grade, &usage);
		switch (grade) {
		case 1:
			amount = usage * 1000;
			break;
		case 2:
			amount = usage * 800;
			break;
		case 3:
			amount = usage * 600;
			break;
		default:
			printf("�߸��� ����� �Է��Ͽ� ����� ����� �����մϴ�.");
			return 0;
		}

		total = amount * 1.1;
		printf("�� �ݾ��� %.2f ���Դϴ�.\n\n", total);
	}
}