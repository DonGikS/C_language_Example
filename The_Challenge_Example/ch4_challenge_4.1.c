#include<stdio.h>

int main() {
	float weight, height;
	float meter, BMI;
	int result;
	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%f %f", &weight, &height);

	meter = height * 0.01;
	BMI = weight / (meter*meter);
	result = (BMI >= 20 && BMI < 25) ? ("표준 입니다.\n") : ("체중관리가 필요합니다.\n");

	printf("%s", result);

	
	return 0;
}