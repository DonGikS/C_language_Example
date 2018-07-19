#include<stdio.h>

int main() {

	int a, b;
	float avg;

	printf("두 과목의 점수 : ");
	scanf("%d %d", &a, &b);
	avg = (a + b) / 2.0;
	printf("평균 : %.1f", avg);

	return 0;
}