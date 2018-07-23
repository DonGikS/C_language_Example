#include<stdio.h>

int main() {
	
	int a;

	do {
		printf("0보다 큰 수를 입력하세요.\n");
		scanf("%d", &a);

	} while (a < 0);

	printf("a는 %d입니다.\n", a);

	for (int i = 0; i < 5; i++) {
		printf("Be happy\n");
	}
	
	return 0;

}