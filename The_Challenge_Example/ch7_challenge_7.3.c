#include <stdio.h>

int prime_check(int n);


int main(void) {

	int num, checkPrime;
	int countCol = 0;
	printf("#양수 입력 : ");
	scanf("%d", &num);
	
	for (int i = 2; i <= num; i++) {
		checkPrime = prime_check(i);
		if (checkPrime == 1) {
			printf("%5d", i);
			countCol++;
		}
		if (countCol == 5) {
			printf("\n");
			countCol = 0;
		}
	}


	return 0;
}
int prime_check(int a) {

	int temp = 0;
	int count = 0;
	for (int i = 2; i <= a; i++) {
		if (a%i == 0) count++;
	}
	if (count == 1) temp = 1;
	else temp = 0;

	return temp;
}