#include <stdio.h>
#include<string.h>


int main() {
	char name[12] = "ȫ�浿";
	int age = 17;
	float height = 190.0;
	char bloodType[3] = "AB";

	age = age + 10;
	height = height - .5;

	printf("10�� ���� ������...\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d��\n", age);
	printf("Ű : %.1fcm\n", height);
	printf("������ : %s��\n", bloodType);
	
	//string.h���
	printf("\nstring.h����� name\n");
	strcpy(name, "����ȫ");
	printf("strcpy����� name ���ڿ� : %s\n", name);
	return 0;

}