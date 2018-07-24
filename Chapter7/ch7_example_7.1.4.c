#include<stdio.h>

int my_power(int a, int b) {
	
	int temp = 1;

	for (int i = 0; i < b; i++) {
		temp *= a;
	}
	return temp;
}
int main() {
	int a = 2;
	int b = 10;
	int res;
	
	res = my_power(a, b);

	printf("%d\n", res);

	return 0;

}