#include<stdio.h>

int main() {
	
	int a;

	do {
		printf("0���� ū ���� �Է��ϼ���.\n");
		scanf("%d", &a);

	} while (a < 0);

	printf("a�� %d�Դϴ�.\n", a);

	for (int i = 0; i < 5; i++) {
		printf("Be happy\n");
	}
	
	return 0;

}