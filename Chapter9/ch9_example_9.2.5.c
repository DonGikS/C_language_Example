#include<stdio.h>


int assign(int *pa);

int main(void) {
	
	int a = 0;
	assign(&a);
	printf("%d\n", a);
	
	return 0;
}

int assign(int *pa) {
	*pa = 10;
}