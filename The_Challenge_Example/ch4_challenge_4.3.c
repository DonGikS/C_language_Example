#include<stdio.h>

int main() {
	int length, velocity;
	int hour, min;
	float sec;

	float temp, calTime, calSec;

	printf("거리와 속력을 입력 : ");
	scanf("%d %d", &length, &velocity);

	calTime = ((float)length) / ((float)velocity);
	calSec = calTime * 3600.0;

	hour = calSec / 3600;
	temp = calSec - (hour * 3600);
	min = temp / 60;
	temp = temp - (min * 60);
	sec = temp;

	printf("소요 시간은 %d시간 %d분 %.3f초입니다.", hour, min, sec);

	return 0;
}