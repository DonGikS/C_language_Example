#include<stdio.h>

int main() {
	
	int input, num;
	int countCol;
	printf("2 이상의 정수를 입력하세요. : ");
	scanf("%d", &input);
	num = 2;
	countCol = 0;
	while (num <= input) {
		int count = 0;

		for (int i = 1; i <= num; i++) {
			if ((num % i) == 0) count++;
		}

		if (count == 2) {
			printf("%5d", num);
			countCol++;
		}
		if (countCol == 5) {
			printf("\n");
			countCol = 0;
		}
		num++;

	}
	return 0;
}