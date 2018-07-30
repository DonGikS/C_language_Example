#include<stdio.h>

void func(int *pMod, int *pRem);

int main(void) {


	int mod, rem;
	func(&mod, &rem);
	printf("몫 : %d, 나머지 : %d", mod, rem);

	return 0;
}

void func(int *pMod, int *pRem) {

	int getNum;
	printf("양 수 입력 : ");
	scanf("%d", &getNum);
	*pMod = getNum / 4;
	*pRem = getNum % 4;
}
