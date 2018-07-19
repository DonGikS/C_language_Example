#include<stdio.h>

int main() {

	int korean, english, mathmatics, totalScore;

	korean = 70;
	english = 80;
	mathmatics = 90;

	totalScore = korean + english + mathmatics;

	printf("국어 : %d, 영어 : %d, 수학 : %d\n", korean, english, mathmatics);
	printf("총점 : %d\n", totalScore);
	
	return 0;
}