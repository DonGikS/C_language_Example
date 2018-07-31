#include<stdio.h>

int find_31(int *pMonth, int size);
void change_29(int *p2);
void printmonth(int *pM, int size);

int main(void) {
	
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };
	int size = (sizeof(month) / sizeof(month[0]));
	int num31;
	num31 = find_31(month, size);
	change_29(month);
	printmonth(month, size);
	return 0;
}
//Example 10.2.2
int find_31(int *pMonth, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (pMonth[i] == 31) {
			count++;
		}
	}

	return count;

}
//Example 10.2.3
void change_29(int *p2) {
	p2[1] = 29;
}
//Example 10.2.4
void printmonth(int *pM, int size) {
	int line5=0;
	for (int i = 0; i < size; i++) {
		if (line5 == 4) {
			printf("%4d\n", pM[i]);
			line5 = 0;
		}
		else {
			printf("%4d", pM[i]);
			line5++;
		}
	}
	printf("\n");
}