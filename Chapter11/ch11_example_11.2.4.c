#include<stdio.h>

int main(void) {
	
	int num, alphabet;

	printf("���� �����ϴ� ���ڴ�? ");
	scanf("%d", &num);
	while (getchar() != '\n');
	printf("���� �����ϴ� ���ĺ���? ");
	alphabet = getchar();
	printf("%d %c", num, alphabet);
	
	
	return 0;
}