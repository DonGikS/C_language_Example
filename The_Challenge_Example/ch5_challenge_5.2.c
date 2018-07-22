#include<stdio.h>

int main() {
	
	int rich = 150;
	double grade = 4.1;
	int tuition = 100;
	int scholarship;
	if (rich >= 100 && grade >= 4.0) {
		scholarship = tuition * 0.2;
		tuition = tuition - scholarship;
	}
	else if (rich < 100) {
		scholarship = tuition * 0.4;
		tuition = tuition - scholarship;
	}

	printf("다음 학기 납입할 등록금은 %d만원입니다.\n", tuition);
	return 0;
}