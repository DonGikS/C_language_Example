#include<stdio.h>

int main() {
	int i, n;

	i = 0;
	n = 0;

	while (i < 100) {
		n += (i + 1);
		i++;
	}
	printf("%d", n);

	return 0;
}