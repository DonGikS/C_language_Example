#include<stdio.h>

int main(void) {

	int lottoNum[6] = {0};
	int cnt = sizeof(lottoNum) / sizeof(lottoNum[0]);
	int checkCycle;
	for (int i = 0; i < cnt; i++) {
		checkCycle = 0;
		while (1) {
			printf("�ζǹ�ȣ �Է� : ");
			scanf("%d", &lottoNum[i]);
			for (int j = 0; j < i; j++) {
				if (lottoNum[j] == lottoNum[i]) {
					printf("���� ��ȣ�� �ֽ��ϴ�!\n");
					checkCycle = 1;
					break;
				}
				else checkCycle = 0;
			}
			if (checkCycle == 0)break;
		}
	}

	printf("�Էµ� �ζǹ�ȣ : ");
	for (int i = 0; i < cnt; i++) {
		if(i == cnt -1) printf("%5d\n", lottoNum[i]);
		else printf("%5d", lottoNum[i]);
	}
	return 0;
}