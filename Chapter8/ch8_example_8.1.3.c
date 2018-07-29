#include<stdio.h>

int main(void) {

	double ary[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 };
	int cnt = sizeof(ary) / sizeof(ary[0]);
	for (int i = cnt - 1; i >= 0; i--) {
		if(i == 0) printf("%.1f \n", ary[i]);
		else printf("%.1f  ", ary[i]);
		
	}

	return 0;
}