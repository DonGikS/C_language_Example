#include<stdio.h>

void swap(double *pa, double *pb);

int main(void) {

	double a = 1.5, b = 3.4;
	printf("a:%u. b:%u", &a, &b);
	swap(&a, &b);
	printf("a:%.1lf, b:%.1lf", a, b);
	printf("a:%u. b:%u", &a, &b);

	return 0;
}

void swap(double *pa, double *pb) {

	double *pt;
	
	pt = pa;
	pa = pb;
	pb = pt;
}
//swap �Լ��� ���� ab�� �ּҸ� �ް� �� ���� �ٲٹǷ� main �Լ��� ���� a, b�� ���� �ٲ��� �ʴ´�.