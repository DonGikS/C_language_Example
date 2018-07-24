#include<stdio.h>

int rec_func(int n) {
	if (n == 1) return 1;
	return n + rec_func(n - 1);
}

int main(void) {
	int testNum = 10;
	printf("%d\n",rec_func(10));
	return 0;
}