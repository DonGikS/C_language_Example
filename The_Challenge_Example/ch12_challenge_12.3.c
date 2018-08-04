#include<stdio.h>
#include<string.h>

int main(void) {

	char sentence[800];
	char findWord[80];
	
	int numSen, numFind, count;
	printf("문장 입력 : ");
	gets(sentence);
	numSen = strlen(sentence);

	while (1) {
		count = 0;
		printf("검색할 문자열 입력 (종료는 end) : ");
		gets(findWord);

		if (strcmp(findWord, "end") == 0) break;

		numFind = strlen(findWord);
		
		for (int i = 0; i < numSen - 1; i++) {
			if ((numSen - i) < numFind) break;
			if (strncmp(findWord, sentence + i, numFind) == 0) {
				count++;
				i += (numFind - 1);
			}
		}

		
		
		printf("검색 결과 : %d\n", count);
	}
	

	return 0;
}