#include<stdio.h>

int main() {
	int a = 10;
	int b = 3;

	if (a > b) printf("결과 : %d\n", a / b);
	else if (a < b) printf("결과 : %d\n", a % b);

	return 0;
}