#include<stdio.h>

void set(int h, int m);
void show(void);
void move(void);

int hour, min, apm;

int main(void) {

	int hour, min;
	int timeshift;

	printf("���� �ð��� �� �Է�(24�ð�) : ");
	scanf("%d%d", &hour, &min);
	set(hour, min);
	printf("������ �ð� : ");
	show();
	printf("��� �ð� �Է�(��) : ");
	scanf("%d", &timeshift);

	for (int i = 0; i < timeshift; i++) {
		move();
	}
	printf("���� �ð� : ");
	show();

	return 0;
}

void set(int h, int m) {
	if ((h >= 0 && h < 12) || h == 24) apm = 0;
	else apm = 1;

	if (h == 12) hour = h;
	else hour = h % 12;

	min = m;
}
void show(void) {
	char *cp;
	if (apm == 0) cp = "AM";
	else cp = "PM";

	printf("%02d:%02d(%s)\n", hour, min, cp);

}
void move(void) {
	min++;
	if (min == 60) {
		hour++;
		min = 0;
		if (hour == 12) {
			if (apm == 0) {
				apm = 1;
			}
			else {
				apm = 0;
				hour = 0;
			}
		}
	}
	
}