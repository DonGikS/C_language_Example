#include<stdio.h>
#include<string.h>

int main(void) {
	char word01[80];
	char word02[80];
	char word03[80];
	char temp[80];
	int com1, com2, com3;

	printf("세 단어 입력 : ");
	scanf("%s%s%s", word01, word02, word03);

	com1 = strcmp(word01, word02);
	com2 = strcmp(word01, word03);
	com3 = strcmp(word02, word03);
	if (com1 == 1) {
		if (com2 == 1) {
			if (com3 == 1) {
				strcpy(temp, word01);
				strcpy(word01, word03);
				strcpy(word03, temp);
			}
			else {
				strcpy(temp, word01);
				strcpy(word01, word02);
				strcpy(word02, word03);
				strcpy(word03, temp);
			}
		}
		else {
			strcpy(temp, word01);
			strcpy(word01, word02);
			strcpy(word02, temp);
		}
	}
	else if (com1 == -1) {
		if (com2 == 1) {
			strcpy(temp, word01);
			strcpy(word01, word03);
			strcpy(word03, word02);
			strcpy(word02, temp);
		}
		else {
			if (com3 == 1) {
				strcpy(temp, word02);
				strcpy(word02, word03);
				strcpy(word03, temp);
			}
				
		}
	}

	printf("%s %s %s", word01, word02, word03);
	
	return 0;
}