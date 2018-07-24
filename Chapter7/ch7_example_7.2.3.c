#include<stdio.h>

int sum(int a);

int main(void) {

	sum(10);
	sum(100);

	return 0;
}

int sum(int a) {
	int temp = 0;

	for (int i = 1; i <= a; i++) {
		temp += i;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", a, temp);

	return temp;
}