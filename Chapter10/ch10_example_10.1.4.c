#include<stdio.h>

int main(void) {
	
	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0};
	double *pa = ary;
	double *pb = ary + 2;
	double avg, tot = 0;
	printf("배열 요소의 값 :");
	for (int i = 0; i < 5; i++) {
		printf("%6.1lf", *(pa + i));
		tot += pa[i];
	}
	printf("\n");
	
	avg = tot / (sizeof(ary) / sizeof(ary[0]));

	printf("평균 : %.1lf\n", avg);

	return 0;


}