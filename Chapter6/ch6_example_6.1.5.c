#include<stdio.h>

int main() {

	int i, n;
	
	n = 0;

	do {
		printf("��� �Է� : ");
		scanf("%d", &i);
		if (i > 0) {
			n += i;
		}
	} while (i > 0);

	printf("������ �� : %d", n);
	return 0;
}