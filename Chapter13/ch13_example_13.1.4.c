#include<stdio.h>

int a;

int main(void) {
	
	int b = 10;
	{
		static int a = 20;

		b = a;
	}
	a += b;
	printf("%d", a);
	//출력 결과 20
	return 0;
}