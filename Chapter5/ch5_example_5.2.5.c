#include<stdio.h>

int main() {

	int age = 25;
	float chest = 95;
	char size;

	if (age >= 20) {
		if (chest < 90) size = 'S';
		else if (chest >= 90 && chest < 100) size = 'M';
		else size = 'L';
	}
	else {
		if (chest < 85) size = 'S';
		else if (chest >= 85 && chest < 95) size = 'M';
		else size = 'L';
	}

	printf("size는 %c입니다.\n", size);

	return 0;
}