#include<stdio.h>


void print_graph(int *ps, int size);

int main(void) {
	
	int score[5] = { 72, 88, 95, 64, 100 };
	int size = sizeof(score) / sizeof(score[0]);
	print_graph(score, size);
	return 0;
}

void print_graph(int *ps, int size) {
	int num;
	int count;
	for (int i = 0; i < size; i++) {
		count = 0;
		num = ps[i] / 5;
		printf("(%3d) ", ps[i]);
		while (count < num) {
			printf("*");
			count++;
		}
		printf("\n");
	}
}