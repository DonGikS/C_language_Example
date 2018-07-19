#include <stdio.h>
#include<string.h>


int main() {
	char name[12] = "홍길동";
	int age = 17;
	float height = 190.0;
	char bloodType[3] = "AB";

	age = age + 10;
	height = height - .5;

	printf("10년 후의 프로필...\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d살\n", age);
	printf("키 : %.1fcm\n", height);
	printf("혈액형 : %s형\n", bloodType);
	
	//string.h사용
	printf("\nstring.h사용한 name\n");
	strcpy(name, "동길홍");
	printf("strcpy사용한 name 문자열 : %s\n", name);
	return 0;

}