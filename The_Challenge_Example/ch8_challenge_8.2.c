#include<stdio.h>

int main(void) {
	
	char str[80];
	int changeNum, cnt;

	changeNum = 0;
	cnt = sizeof(str) / sizeof(str[0]);

	printf("문장 입력 : ");
	gets(str);

	for (int i = 0; i < cnt; i++) {
		if (str[i] == '\0') break;
		if ((str[i] >= 'A') && str[i] <= 'Z') {
			str[i] += 'a' - 'A';
			changeNum++;
		}
	}
	printf("바뀐 문장 : ");
	puts(str);
	printf("바뀐 문자 수 : %d\n", changeNum);

	return 0;
}