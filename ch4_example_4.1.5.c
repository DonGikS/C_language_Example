#include<stdio.h>

int main() {

	int ddoDDo = 70;
	int ggoGGo = 30;

	int exchange;

	int haveMoney = 1000;

	int a = ddoDDo * 2;
	int b = ggoGGo * 3;
	int num500, num100, num50, num10, temp;

	printf("또또면 전체 금액 : %d원\n", a);
	printf("꽁꽁바 전체 금액 : %d원\n", b);

	exchange = haveMoney - a - b;

	printf("거스름돈 : %d원\n", exchange);
	printf("거스름돈 동전의 최소 개수...\n");
	num500 = exchange / 500;
	temp = exchange % 500;
	num100 = temp / 100;
	temp = temp % 100;
	num50 = temp / 50;
	temp = temp % 50;
	num10 = temp / 10;
	printf("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n",
		num500, num100, num50, num10);

	return 0;
	

}