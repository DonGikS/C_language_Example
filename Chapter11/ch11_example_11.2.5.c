#include<stdio.h>

int main(void) {
	int countEnter=0;
	char ch;

	while (scanf("%c", &ch) != -1) {
		if (ch == '\n') countEnter++;
	}
	printf("엔터 키를 누른 횟수 : %d\n", countEnter);
	return 0;
}