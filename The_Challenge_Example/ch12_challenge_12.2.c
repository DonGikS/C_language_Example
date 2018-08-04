#include<stdio.h>
#include<string.h>

int main(void) {

	char total[800] = {0};
	char word[20];

	while (1) {
		printf("단어 입력 : ");
		scanf("%s", word);

		if (strcmp(word, "end") == 0) break;

		strcat(total, word);
		printf("현재까지의 문자열 : %s\n", total);
		strcat(total, " ");
	}

	return 0;
}