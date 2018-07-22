#include<stdio.h>

int main() {
	int a, b, res;

	res = 0;

	printf("a와 b를 입력해주세요. ");
	scanf("%d %d", &a, &b);

	if (a >= 10) {
		res = a;
	}
	else {
		if (b != 0) {
			res = a / b;
		}
	}

	printf("res는 %d입니다.\n", res);

	return 0;
}