#include<stdio.h>

int main() {
	float time = 3.76;
	int hour, min, sec;
	int hourToSec, minToSec, timeToSec;

	int temp;

	hourToSec = 3600;
	minToSec = 60;
	timeToSec = time * hourToSec;
	printf("%d\n", timeToSec);
	hour = timeToSec / hourToSec;
	temp = timeToSec % hourToSec;
	printf("%d\n", temp);
	min = temp / minToSec;
	temp = temp % minToSec;
	printf("%d\n", temp);
	sec = temp;

	printf("%.2f�ð��� %d�ð� %d�� %d���Դϴ�.\n", time, hour, min, sec);
	return 0;

}