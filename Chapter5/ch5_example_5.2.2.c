#include<stdio.h>

int main() {

	int n;

	printf("���� �Է� : ");
	scanf("%d", &n);

	switch (n % 3) {

	case 0:
		printf("����\n");
		break;
	default:
		printf("��\n");
		break;
	}

	return 0;
}