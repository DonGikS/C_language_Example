#include<stdio.h>

int main() {
	int a = 10;
	int b = 3;

	if (a > b) printf("��� : %d\n", a / b);
	else if (a < b) printf("��� : %d\n", a % b);

	return 0;
}