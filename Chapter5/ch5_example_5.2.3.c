#include<stdio.h>

int main() {
	int a, b, res;

	res = 0;

	printf("a�� b�� �Է����ּ���. ");
	scanf("%d %d", &a, &b);

	if (a >= 10) {
		res = a;
	}
	else {
		if (b != 0) {
			res = a / b;
		}
	}

	printf("res�� %d�Դϴ�.\n", res);

	return 0;
}