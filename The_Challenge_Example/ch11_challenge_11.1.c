#include<stdio.h>

int main(void) {
	
	int ch, len, max = 0;

	while (1) {
		len = 0;
		ch = getchar();
		while ((ch != EOF) && (ch != '\n')) {
			len++;
			ch = getchar();
		}
		if (ch == -1) break;
		else if (len > max) max = len;
	}

	printf("���� �� �ܾ��� ���� : %d\n", max);

	
	
	return 0;
}