#include<stdio.h>

int main(void) {
	
	int num, alphabet;

	printf("가장 좋아하는 숫자는? ");
	scanf("%d", &num);
	while (getchar() != '\n');
	printf("가장 좋아하는 알파벳은? ");
	alphabet = getchar();
	printf("%d %c", num, alphabet);
	
	
	return 0;
}