#include<stdio.h>

int main() {
	
	char name[20];
	int age;
	float height;

	printf("�̸� �Է� : ");
	scanf("%s", &name);
	printf("���̿� Ű(cm) �Է� : ");
	scanf("%d %f", &age, &height);
	printf("%s %d�� %.1fcm", name, age, height);

	return 0;
}