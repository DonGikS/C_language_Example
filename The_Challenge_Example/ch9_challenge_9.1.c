#include<stdio.h>

void func(int *pMod, int *pRem);

int main(void) {


	int mod, rem;
	func(&mod, &rem);
	printf("�� : %d, ������ : %d", mod, rem);

	return 0;
}

void func(int *pMod, int *pRem) {

	int getNum;
	printf("�� �� �Է� : ");
	scanf("%d", &getNum);
	*pMod = getNum / 4;
	*pRem = getNum % 4;
}
