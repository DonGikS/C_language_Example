#include<stdio.h>

int main(void) {
	
	int a = 10, b = 20, temp;
	int *pa = &a;
	int *pb = &b;
	printf("%d %d \n", *pa, *pb);
	temp = *pa;
	*pa = *pb;
	*pb = temp;

	printf("%d %d \n", *pa, *pb);
	return 0;
}