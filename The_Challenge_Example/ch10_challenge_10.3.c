#include<stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);


int main(void) {
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}
void input_nums(int *lotto_nums) {

	int i = 0;
	int check;
	while (i < 6) {
		check = 0;
		printf("��ȣ �Է� : ");
		scanf("%d", &lotto_nums[i]);
		for (int j = 0; j < i; j++) {
			if (lotto_nums[j] == lotto_nums[i]) {
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				check = 1;
				break;
			}
		}
		if(check == 0)i++;
	}
	

}
void print_nums(int *lotto_nums) {
	printf("�ζ� ��ȣ : ");
	for (int i = 0; i < 6; i++) {
		printf("%4d", lotto_nums[i]);
	}
}