#include<stdio.h>

int main() {

	int input, answer, tryCount;

	int correctNum = 19;

	answer = 0;
	tryCount = 0;
	while (answer != 1) {
		printf("���� �Է�(1���� 30����) : ");
		scanf("%d", &input);

		if (input != correctNum) {
			if (input < correctNum && input > 0) {
				printf("%d���� Ů�ϴ�!\n", input);
				tryCount++;
			}
			else if (input > correctNum && input < 31) {
				printf("%d���� �۽��ϴ�!\n", input);
				tryCount++;
			}
			else {
				printf("1���� 30������ ���ڸ� �Է��ϼ���.\n");
			}
		}
		else {
			printf("�����Դϴ�.\n");
			tryCount++;
			answer = 1;
		}
	}
	printf("�õ��� Ƚ���� %dȸ �Դϴ�.\n", tryCount);
	return 0;
}