#include<stdio.h>

int main(void) {

	int ary[10] = { 1,2 };

	int cnt = sizeof(ary) / sizeof(ary[0]);

	for (int i = 2; i < cnt; i++) {
		ary[i] = ary[i - 1] + ary[i - 2];
	}
	for (int i = 0; i < cnt; i++) {
		if(i == cnt - 1) printf("%d\n", ary[i]);
		else printf("%d   ", ary[i]);
	}

	return 0;
}