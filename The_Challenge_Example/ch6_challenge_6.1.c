#include<stdio.h>

int main() {

	int input, answer, tryCount;

	int correctNum = 19;

	answer = 0;
	tryCount = 0;
	while (answer != 1) {
		printf("숫자 입력(1부터 30까지) : ");
		scanf("%d", &input);

		if (input != correctNum) {
			if (input < correctNum && input > 0) {
				printf("%d보다 큽니다!\n", input);
				tryCount++;
			}
			else if (input > correctNum && input < 31) {
				printf("%d보다 작습니다!\n", input);
				tryCount++;
			}
			else {
				printf("1부터 30까지의 숫자를 입력하세요.\n");
			}
		}
		else {
			printf("정답입니다.\n");
			tryCount++;
			answer = 1;
		}
	}
	printf("시도한 횟수는 %d회 입니다.\n", tryCount);
	return 0;
}