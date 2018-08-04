#include<stdio.h>
#include<string.h>


int main(void) {

	char word01[80];
	char word02[80];

	char *reslen, *resdic;

	int com;
	printf("두 단어 입력 : ");
	scanf("%s", word01);
	scanf("%s", word02);

	if (strlen(word01) > strlen(word02)) reslen = word01;
	else reslen = word02;
	com = strcmp(word01, word02);

	if (com == -1) resdic = word01;
	else if (com == 1) resdic = word02;
	
	if (strlen(word01) == strlen(word02)) {
		printf("길이가 긴 단어는 없고, 길이는 같다.\n");
	}
	else {
		printf("길이가 긴 단어 : %s\n", reslen);
	}

	if (com == 0) {
		printf("두단어는 같은 단어다.\n");
	}
	else {
		printf("사전에 먼저 나오는 단어 : %s\n", resdic);
	}

	return 0;
}