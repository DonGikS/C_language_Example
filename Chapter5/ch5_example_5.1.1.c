#include<stdio.h>

int main() {

	int a;

	printf("a���� �־��ּ���. : ");
	scanf("%d", &a);

	if (a < 0) a = -a;

	if (a % 2 == 0) a = 2;

	else a = 1;
	

	printf("a�� %d�Դϴ�.\n", a);

	return 0;
}