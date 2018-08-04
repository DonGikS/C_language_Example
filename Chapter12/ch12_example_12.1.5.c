#include<stdio.h>


int main(void) {

	char name[20];
	char phone[20];
	char address[80];

	printf("이름 : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("전화번호 : ");
	fgets(phone, sizeof(phone), stdin);
	phone[strlen(phone) - 1] = '\0';
	printf("주소 : ");
	fgets(address, sizeof(address), stdin);
	address[strlen(address) - 1] = '\0';
	printf("%s, %s, %s\n", name, phone, address);


	return 0;
}