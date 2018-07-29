#include<stdio.h>

int main(void) {

	int ary[6] = { 1, 2, 3 };
	int cnt;

	cnt = sizeof(ary) / sizeof(ary[0]);

	for (int i = 0; i < cnt; i++) {
		if (i != cnt - 1) printf("%2d ", ary[i]);
		else printf("%2d\n", ary[i]);
	}

	return 0;
}