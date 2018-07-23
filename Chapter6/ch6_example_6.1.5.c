#include<stdio.h>

int main() {

	int i, n;
	
	n = 0;

	do {
		printf("양수 입력 : ");
		scanf("%d", &i);
		if (i > 0) {
			n += i;
		}
	} while (i > 0);

	printf("누적된 값 : %d", n);
	return 0;
}