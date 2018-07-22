#include<stdio.h>

int main() {
	int totalMoney = 10000;
	int tunaSand, fastCoffee, paperCup;
	int exChange;
	int w5000, w1000, w500, w100, w50, w10;
	int temp;

	printf("세 개의 물건값을 입력하세요 : ");
	scanf("%d %d %d", &tunaSand, &fastCoffee, &paperCup);
	
	exChange = totalMoney - tunaSand - fastCoffee - paperCup;

	printf("거스름돈은 %d원입니다.\n", exChange);

	w5000 = exChange / 5000;
	temp = exChange % 5000;
	w1000 = temp / 1000;
	temp = temp % 1000;
	w500 = temp / 500;
	temp = temp % 500;
	w100 = temp / 100;
	temp = temp % 100;
	w50 = temp / 50;
	temp = temp % 50;
	w10 = temp / 10;
	
	printf("오천원권 : %d장\n", w5000);
	printf("천원권 : %d장\n", w1000);
	printf("오백원짜리 동전 : %d개\n", w500);
	printf("백원짜리 동전 : %d개\n", w100);
	printf("오십원짜리 동전 : %d개\n", w50);
	printf("십원짜리 동전 : %d개\n", w10);
	return 0;
}