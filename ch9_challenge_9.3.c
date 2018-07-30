#include<stdio.h>

void rotate(int *pa, int *pb, int *pc);

int main(void) {

	int a, b, c;
	a = 1;
	b = 2;
	c = 3;
	char temp;
	printf("%d:%d:%d", a, b, c);
	while (1) {
		scanf("%c", &temp);
		if (temp == '\n') {
			rotate(&a, &b, &c);
			printf("%d:%d:%d", a, b, c);
		}
		else break;
	}
	

	return 0;
}
void rotate(int *pa, int *pb, int *pc) {
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;

}