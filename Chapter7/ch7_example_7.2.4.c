#include<stdio.h>

int main(void) {
	int sel;

	sel = disp_menu();
	printf("선택된 메뉴는 %d번 입니다.\n", sel);

	return 0;
}

int disp_menu(void) {
	int a;

	printf("1. 볶음짬뽕\n");
	printf("2. 콩나물국밥\n");
	printf("3. 바지락칼국수\n");

	while (1) {
		printf("# 메뉴를 선택하세요(1 ~ 3) : ");
		scanf("%d", &a);
		if (a == 1 || a == 2 || a == 3) {
			return a;
		}
		else printf("올바른 숫자를 기입하세요.\n\n");
	}
}