#include<stdio.h>

int main(void) {
	
	char ch[10];
	int num;
	int i = 0;
	int tot = 0;
	int decimal = 1;

	while ((num = getchar()) != '\n') {
		ch[i++] = num;
	}
	while (i > 0) {
		tot += ((ch[--i] - '0') * decimal);
		decimal *= 10;
	}
	printf("%d", tot + 10);
	return 0;
}