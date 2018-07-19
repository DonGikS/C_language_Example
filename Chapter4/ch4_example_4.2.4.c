#include<stdio.h>

int main() {

	int seats = 70;
	int audience = 65;

	float rate;

	rate = 100 * ((float)audience / (float)seats);

	printf("ÀÔÀå·ü : %.1f%%\n", rate);

	return 0;
}