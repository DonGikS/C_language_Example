#include<stdio.h>

int main() {
	
	int a, b, res;
	char simbol;

	printf("��Ģ ���� �Է�(����) : ");
	scanf("%d%c%d", &a, &simbol, &b);
	if (simbol == '+') res = a + b;
	else if (simbol == '-') res = a - b;
	else if (simbol == '*') res = a * b;
	else if (simbol == '/') res = a / b;
	else {
		printf("�ùٸ� ��ȣ�� ���Ǽ���.\n");
		return 0;
	}

	printf("%d%c%d=%d",a,simbol,b,res);
	return 0;
}