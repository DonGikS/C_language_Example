#include<stdio.h>

int main() {
	int meter;
	float inch, meterTOinch;

	meter = 2;
	inch = 2.54;

	meterTOinch = (meter * 100) / inch;

	printf("%d미터는 %.1f인치입니다.", meter, meterTOinch);
	return 0;

}