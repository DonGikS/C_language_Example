#include<stdio.h>

void reverse(double *pa, int size);
int main(void) {
	
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	int size = sizeof(ary) / sizeof(ary[0]);

	reverse(ary, size);
	for (int i = 0; i < size; i++) {
		printf("%.1lf ", ary[i]);
	}
	return 0;
}
void reverse(double *pa, int size) {
	
	double temp;
	for (int i = 0; i < size / 2; i++) {
		temp = pa[i];
		pa[i] = pa[size - 1 - i];
		pa[size - 1 - i] = temp;
	}

}