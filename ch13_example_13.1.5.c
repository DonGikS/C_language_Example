#include<stdio.h>

double get_next(void);
double ary[] = { 0.1, 0.3, 0.5, 0.7, 0.9 };

int main(void) {
	double res = 0;
	int i;

	for (i = 0; i < 5; i++) {
		res += get_next();
	}
	printf("%.1lf", res);

	return 0;
}

double get_next(void) {
	double a = 0;
	static int count = 0;

	a = ary[count];
	
	count++;

	return a;
}