#include<stdio.h>

int main() {

	float a, b;

	a = 4.0;
	b = 1.2;

	printf("%.1f + %.1f = %.1f\n", a, b, a + b);
	printf("%.1f - %.1f = %.1f\n", a, b, a - b);
	printf("%.1f * %.1f = %.1f\n", a, b, a * b);
	printf("%.1f / %.1f = %.1f\n", a, b, a / b);
	return 0;
}