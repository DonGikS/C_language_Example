#include<stdio.h>

int main() {

	int ddoDDo = 70;
	int ggoGGo = 30;

	int exchange;

	int haveMoney = 1000;

	int a = ddoDDo * 2;
	int b = ggoGGo * 3;
	int num500, num100, num50, num10, temp;

	printf("�ǶǸ� ��ü �ݾ� : %d��\n", a);
	printf("�ǲǹ� ��ü �ݾ� : %d��\n", b);

	exchange = haveMoney - a - b;

	printf("�Ž����� : %d��\n", exchange);
	printf("�Ž����� ������ �ּ� ����...\n");
	num500 = exchange / 500;
	temp = exchange % 500;
	num100 = temp / 100;
	temp = temp % 100;
	num50 = temp / 50;
	temp = temp % 50;
	num10 = temp / 10;
	printf("500�� %d��, 100�� %d��, 50�� %d��, 10�� %d��\n",
		num500, num100, num50, num10);

	return 0;
	

}