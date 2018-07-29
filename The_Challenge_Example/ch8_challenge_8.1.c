#include<stdio.h>

int main(void) {
	int score[5];
	int max, min, tot = 0;
	int index_max, index_min;
	int cnt;

	printf("5명 심사위원의 점수 입력 : ");
	scanf("%d%d%d%d%d", &score[0], &score[1], &score[2], &score[3], &score[4]);

	cnt = sizeof(score) / sizeof(score[0]);
	max = min = score[0];
	index_max = index_min = 0;

	for (int i = 0; i < cnt; i++) {
		if (max < score[i]) {
			max = score[i];
			index_max = i;
		}
		if (min > score[i]) {
			min = score[i];
			index_min = i;
		}
	}
	printf("유효점수 :");
	for (int i = 0; i < cnt; i++) {
		if ((i == index_min) || (i == index_max)) continue;
		printf("%3d", score[i]);
		tot += score[i];
	}
	printf("\n");
	printf("평균 : %.1lf\n", tot / 3.0);
	return 0;
}