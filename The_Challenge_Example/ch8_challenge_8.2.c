#include<stdio.h>

int main(void) {
	
	char str[80];
	int changeNum, cnt;

	changeNum = 0;
	cnt = sizeof(str) / sizeof(str[0]);

	printf("���� �Է� : ");
	gets(str);

	for (int i = 0; i < cnt; i++) {
		if (str[i] == '\0') break;
		if ((str[i] >= 'A') && str[i] <= 'Z') {
			str[i] += 'a' - 'A';
			changeNum++;
		}
	}
	printf("�ٲ� ���� : ");
	puts(str);
	printf("�ٲ� ���� �� : %d\n", changeNum);

	return 0;
}