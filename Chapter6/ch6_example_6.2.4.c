#include<stdio.h>

int main() {

	int i, j;
	int n;

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		

		n = 1;

		for (j = 0; j <(i*2) + 1; j++) {
			printf("%d", n);
			n++;
		}
		printf("\n");
	}

	return 0;
}