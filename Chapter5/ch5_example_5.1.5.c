#include<stdio.h>

int main() {

	int totalScore = 259;
	double totalAvg;
	char grade;

	totalAvg = (double)totalScore / 3;

	if (totalAvg >= 90) grade = 'A';
	else if (totalAvg < 90 && totalAvg >= 80) grade = 'B';
	else if (totalAvg < 80 && totalAvg >= 70) grade = 'C';
	else grade = 'F';

	printf("Æò±Õ : %.1lf, ÇÐÁ¡ : %c\n", totalAvg, grade);

	return 0;
}