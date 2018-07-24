#include<stdio.h>

double centi_to_meter(double a) {
	double temp;
	temp = a * .01;
	return temp;
}
int main() {
	double centi, result;
	centi = 185;

	result = centi_to_meter(centi);

	printf("%.2lfm\n", result);
	

	return 0;
}