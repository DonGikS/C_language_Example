#include<stdio.h>

int main(void) {

	char a, b, c;
	scanf("%c%c%c", &a, &b, &c);
	printf("스페이스 키의 아스키 코드값 : %d\n", a);
	printf("탭 키의 아스키 코드값 : %d\n", b);
	printf("엔터 키의 아스키 코드값 : %d\n", c);

	return 0;
}