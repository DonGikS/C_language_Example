#include<stdio.h>

int main() {
	
	int a, b;

	printf("a�� �Է��ϼ���. ");
	scanf("%d", &a);

	switch (a) {
	case 3:
		b = 1;
		break;
	case 5:
		b = 2;
		break;
	case 7:
		b = 3;
		break;
	default:
		b = 0;
	}

	printf("b�� %d�̰�, a�� %d�̴�. \n", b, a);

	return 0;
}