#include<stdio.h>

int main(void) {
	int countEnter=0;
	char ch;

	while (scanf("%c", &ch) != -1) {
		if (ch == '\n') countEnter++;
	}
	printf("���� Ű�� ���� Ƚ�� : %d\n", countEnter);
	return 0;
}