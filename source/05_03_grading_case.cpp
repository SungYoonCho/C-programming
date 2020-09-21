#include <stdio.h>

void main(void) {
	char grade;
	int score, tenth;
	printf("Enter your exam score : ");
	scanf("%d", &score);
	tenth = score / 10;
	switch (tenth) {
		case 10 :
		case 9 :
			grade = 'A';
			break;
		case 8 :
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default :
			grade = 'F';
	}
	printf("Your grade is %c.", grade);
}