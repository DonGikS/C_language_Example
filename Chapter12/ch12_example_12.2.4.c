#include<stdio.h>
#include<string.h>


int main(void) {

	char word01[80];
	char word02[80];

	char *reslen, *resdic;

	int com;
	printf("�� �ܾ� �Է� : ");
	scanf("%s", word01);
	scanf("%s", word02);

	if (strlen(word01) > strlen(word02)) reslen = word01;
	else reslen = word02;
	com = strcmp(word01, word02);

	if (com == -1) resdic = word01;
	else if (com == 1) resdic = word02;
	
	if (strlen(word01) == strlen(word02)) {
		printf("���̰� �� �ܾ�� ����, ���̴� ����.\n");
	}
	else {
		printf("���̰� �� �ܾ� : %s\n", reslen);
	}

	if (com == 0) {
		printf("�δܾ�� ���� �ܾ��.\n");
	}
	else {
		printf("������ ���� ������ �ܾ� : %s\n", resdic);
	}

	return 0;
}