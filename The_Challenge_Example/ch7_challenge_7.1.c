#include<stdio.h>

int total(int kor, int eng, int mat) {
	return kor + eng + mat;
}
double average(int tot) {

	double res;

	res = tot / 3.0;

	return res;
}
void print_title(void) {
	printf("\n\n            =====< ����ǥ >====\n\n\n");

	printf("--------------------------------------------\n");
	printf("    ����    ����    ����    ����    ���\n");
	printf("--------------------------------------------\n");
	
	return;
}

int main(void) {

	int kor, eng, mat, tot;
	double avg;

	printf("# �� ������ �� �� �Է� : ");
	scanf("%d %d %d", &kor, &eng, &mat);

	tot = total(kor, eng, mat);
	
	avg = average(tot);
	
	print_title();

	printf("  %6d  %6d  %6d  %6d  %6.1lf\n", kor, eng, mat, tot, avg);

	return 0;
}