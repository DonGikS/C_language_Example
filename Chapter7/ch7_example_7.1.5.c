#include<stdio.h>

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

int main() {

	int a = 32767;
	int checkPrime;

	checkPrime = prime_check(a);

	(checkPrime == 1) ? printf("소수입니다.\n") : printf("소수가 아닙니다.\n");

	return 0;
}