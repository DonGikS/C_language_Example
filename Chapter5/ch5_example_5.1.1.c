#include<stdio.h>

int main() {

	int a;

	printf("a값을 넣어주세요. : ");
	scanf("%d", &a);

	if (a < 0) a = -a;

	if (a % 2 == 0) a = 2;

	else a = 1;
	

	printf("a는 %d입니다.\n", a);

	return 0;
}