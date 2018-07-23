#include<stdio.h>

int main() {
	for (int i = 0; i < 15; i++) {
		if (i == 4) printf("*\n");
		else if (i == 9) printf("*\n");
		else if (i == 14) printf("*\n");
		else printf("*");
	}
	return 0;
}