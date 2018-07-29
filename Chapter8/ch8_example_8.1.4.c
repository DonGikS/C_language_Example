#include<stdio.h>

int main(void) {

	int A[3] = { 1, 2, 3 };
	int B[10];

	int cnt = sizeof(B) / sizeof(B[0]);

	for (int i = 0; i < cnt; i++) {
		B[i] = A[i%3];
		if (i == cnt - 1) printf("%d\n", B[i]);
		else printf("%d  ", B[i]);

	}
	return 0;
}