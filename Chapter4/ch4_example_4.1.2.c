#include<stdio.h>

int main() {

	int a, b;
	float avg;

	printf("�� ������ ���� : ");
	scanf("%d %d", &a, &b);
	avg = (a + b) / 2.0;
	printf("��� : %.1f", avg);

	return 0;
}