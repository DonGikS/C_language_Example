#include<stdio.h>

int main(void) {
	int sel;

	sel = disp_menu();
	printf("���õ� �޴��� %d�� �Դϴ�.\n", sel);

	return 0;
}

int disp_menu(void) {
	int a;

	printf("1. ����«��\n");
	printf("2. �ᳪ������\n");
	printf("3. ������Į����\n");

	while (1) {
		printf("# �޴��� �����ϼ���(1 ~ 3) : ");
		scanf("%d", &a);
		if (a == 1 || a == 2 || a == 3) {
			return a;
		}
		else printf("�ùٸ� ���ڸ� �����ϼ���.\n\n");
	}
}