#include<stdio.h>

int main() {
	int length, velocity;
	int hour, min;
	float sec;

	float temp, calTime, calSec;

	printf("�Ÿ��� �ӷ��� �Է� : ");
	scanf("%d %d", &length, &velocity);

	calTime = ((float)length) / ((float)velocity);
	calSec = calTime * 3600.0;

	hour = calSec / 3600;
	temp = calSec - (hour * 3600);
	min = temp / 60;
	temp = temp - (min * 60);
	sec = temp;

	printf("�ҿ� �ð��� %d�ð� %d�� %.3f���Դϴ�.", hour, min, sec);

	return 0;
}