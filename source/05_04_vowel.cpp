#include <stdio.h>

void main(void) {
	char a;
	int L_vowel, U_vowel;
	printf("Enter an alphabet : ");
	scanf("%c", &a);

	L_vowel = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
	U_vowel = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');

	if (L_vowel || U_vowel)
		printf("%c is a vowel.", a);
	else
		printf("%c is a consonant.", a);
}