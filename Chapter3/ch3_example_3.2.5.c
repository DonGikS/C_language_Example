#include<stdio.h>

int main() {
	
	char name[20];
	int age;
	float height;

	printf("이름 입력 : ");
	scanf("%s", &name);
	printf("나이와 키(cm) 입력 : ");
	scanf("%d %f", &age, &height);
	printf("%s %d살 %.1fcm", name, age, height);

	return 0;
}