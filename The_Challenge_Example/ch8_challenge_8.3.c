#include<stdio.h>

int main(void) {

	int lottoNum[6] = {0};
	int cnt = sizeof(lottoNum) / sizeof(lottoNum[0]);
	int checkCycle;
	for (int i = 0; i < cnt; i++) {
		checkCycle = 0;
		while (1) {
			printf("로또번호 입력 : ");
			scanf("%d", &lottoNum[i]);
			for (int j = 0; j < i; j++) {
				if (lottoNum[j] == lottoNum[i]) {
					printf("같은 번호가 있습니다!\n");
					checkCycle = 1;
					break;
				}
				else checkCycle = 0;
			}
			if (checkCycle == 0)break;
		}
	}

	printf("입력된 로또번호 : ");
	for (int i = 0; i < cnt; i++) {
		if(i == cnt -1) printf("%5d\n", lottoNum[i]);
		else printf("%5d", lottoNum[i]);
	}
	return 0;
}