#include<stdio.h>

int quot(int a, int b, int *res);

int main(void) {

	int a, b, res;

	printf("�� ���� �Է� : ");
	scanf("%d%d", &a, &b);

	if (quot(a, b, &res) == -1)
	{
		printf("0���� ���� �� �����ϴ�.!");
	}
	else {
		printf("%d�� %d�� ���� ���� %d�Դϴ�.", a, b, res);
	}

	return 0;
}

int quot(int a, int b, int *res) {
	
	if (b == 0) *res = -1;
	else *res = a / b;
	
	
	return *res;
}