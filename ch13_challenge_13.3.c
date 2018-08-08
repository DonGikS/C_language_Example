#include<stdio.h>

char *my_token(char *ps) {
	static char *mp = NULL;
	static int end = 0;
	char *start;
	char *tp;

	if (ps == NULL) return NULL;
	if (end == 1) return NULL;

	if (mp == NULL) start = ps;
	else start = mp + 1;

	tp = start;

	while(*tp != ' ' && *tp != '\0') tp++;

	if (*tp == '\0') end = 1;
	else *tp = '\0';
	mp = tp;

	return start;
}

int main(void) {
	
	char str[80];
	char *p;

	printf("문장 입력 : ");
	gets(str);

	while ((p = my_token(str)) != NULL) {
		printf("%s\n", p);
	}

	return 0;
}
