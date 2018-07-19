#include<stdio.h>

int main() {
	
	int studyScore_kor, studyScore_eng, studyScore_mat, credit;
	int result;
	float studyavg_kor, studyavg_eng, studyavg_mat, totalAvg;
	
	studyScore_kor = 3;
	studyScore_eng = 5;
	studyScore_mat = 4;

	credit = studyScore_kor + studyScore_eng + studyScore_mat;

	studyavg_kor = 3.8;
	studyavg_eng = 4.4;
	studyavg_mat = 3.9;

	totalAvg = (studyavg_kor + studyavg_eng + studyavg_mat) / 3.0;

	result = (credit >= 10) && (totalAvg > 4.0);

	printf("%d\n", result);

	return 0;

}