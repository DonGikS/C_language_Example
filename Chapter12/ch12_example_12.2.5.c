#include<stdio.h>
#include<string.h>

int main(void) {
	
	char word[80];
	char maskWord[80];
	char *pw;
	
	printf("�ܾ� �Է� : ");
	scanf("%s", word);

	strcpy(maskWord, word);
	pw = maskWord;
	for (int i = 0; i < strlen(pw); i++) {
		if (strlen(pw) < 4);
		if ((i > 4) && (pw[i] != '\0')) {
			if (i > 14) {
				pw[i] = '\0';
			}
			else {
				pw[i] = '*';
			}
		}
	}
	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s", word, maskWord);
	
	
	return 0;
}