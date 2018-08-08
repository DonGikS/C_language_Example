#include<stdio.h>

int quot(int a, int b, int *res);

int main(void) {

	int a, b, res;

	printf("두 정수 입력 : ");
	scanf("%d%d", &a, &b);

	if (quot(a, b, &res) == -1)
	{
		printf("0으로 나눌 수 없습니다.!");
	}
	else {
		printf("%d를 %d로 나눈 몫은 %d입니다.", a, b, res);
	}

	return 0;
}

int quot(int a, int b, int *res) {
	
	if (b == 0) *res = -1;
	else *res = a / b;
	
	
	return *res;
}