#include<stdio.h>

int main() {
	int meter;
	float inch, meterTOinch;

	meter = 2;
	inch = 2.54;

	meterTOinch = (meter * 100) / inch;

	printf("%d���ʹ� %.1f��ġ�Դϴ�.", meter, meterTOinch);
	return 0;

}