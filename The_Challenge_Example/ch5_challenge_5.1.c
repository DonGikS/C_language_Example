#include<stdio.h>

int main() {
	
	int a, b, res;
	char simbol;

	printf("사칙 연산 입력(정수) : ");
	scanf("%d%c%d", &a, &simbol, &b);
	if (simbol == '+') res = a + b;
	else if (simbol == '-') res = a - b;
	else if (simbol == '*') res = a * b;
	else if (simbol == '/') res = a / b;
	else {
		printf("올바른 기호를 넣의세요.\n");
		return 0;
	}

	printf("%d%c%d=%d",a,simbol,b,res);
	return 0;
}