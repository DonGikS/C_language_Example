#include<stdio.h>

int main() {
	int totalMoney = 10000;
	int tunaSand, fastCoffee, paperCup;
	int exChange;
	int w5000, w1000, w500, w100, w50, w10;
	int temp;

	printf("�� ���� ���ǰ��� �Է��ϼ��� : ");
	scanf("%d %d %d", &tunaSand, &fastCoffee, &paperCup);
	
	exChange = totalMoney - tunaSand - fastCoffee - paperCup;

	printf("�Ž������� %d���Դϴ�.\n", exChange);

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
	
	printf("��õ���� : %d��\n", w5000);
	printf("õ���� : %d��\n", w1000);
	printf("�����¥�� ���� : %d��\n", w500);
	printf("���¥�� ���� : %d��\n", w100);
	printf("���ʿ�¥�� ���� : %d��\n", w50);
	printf("�ʿ�¥�� ���� : %d��\n", w10);
	return 0;
}