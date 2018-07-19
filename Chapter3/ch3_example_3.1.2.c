#include <stdio.h>

int main() {

	int a;

	a = a + 1;
	a = a + 2;
	a = a + 3;

	printf("a : %d", a);

	return 0;
}
/*
	//예상되는 결과

	a : -238959817298312647912(쓰레기값)
*/