#include<stdio.h>

int main() {
	float weight, height;
	float meter, BMI;
	int result;
	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%f %f", &weight, &height);

	meter = height * 0.01;
	BMI = weight / (meter*meter);
	result = (BMI >= 20 && BMI < 25) ? ("ǥ�� �Դϴ�.\n") : ("ü�߰����� �ʿ��մϴ�.\n");

	printf("%s", result);

	
	return 0;
}