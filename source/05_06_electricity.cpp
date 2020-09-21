#include <stdio.h>

int main(void) {
	int grade;
	double usage, amount, total;
	printf("당신의 등급과 전기 사용량을 입력하시오: ");
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
	default :
		printf("%d는 없는 등급입니다.", grade);
		return 0;
	}

	total = amount * 1.1;
	printf("총 금액은 %.2f 원입니다.", total);
	
	return 0;
}