#include<stdio.h>


void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void) {

	double max, mid, min;

	printf("�Ǽ��� �� �� �Է� : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;

}
void swap(double *pa, double *pb) {
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void line_up(double *maxp, double *midp, double *minp) {
	if (*maxp < *midp) {
		if (*midp < *minp) {
			swap(maxp, minp);
		}
		else {
			swap(maxp, midp);
			swap(midp, minp);
		}
	}
	else if (*maxp < *minp) {
		swap(maxp, minp);
		swap(midp, minp);
	}
}