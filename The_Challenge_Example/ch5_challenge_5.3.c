#include<stdio.h>

int main() {
	
	int basicFee, usage, useFee, tax, totalFee;
	double extraFee100, extraFee200, extraFee300, extraFee400, extraFee500, extraFeeOver;

	extraFee100 = 52.0;
	extraFee200 = 88.5;
	extraFee300 = 127.8;
	extraFee400 = 184.3;
	extraFee500 = 274.3;
	extraFeeOver = 494.0;

	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d", &usage);

	switch (usage / 100) {
	case 0:
		if (usage == 0) {
			basicFee = 0;
			useFee = 0;
			tax = (basicFee + useFee) * 0.09;
		}
		else {
			basicFee = 370;
			useFee = (extraFee100 * (usage % 100));
			tax = (basicFee + useFee) * 0.09;
		}
		break;
	case 1:
		if (usage == 100) {
			basicFee = 370;
			useFee = (extraFee100 * 100);
			tax = (basicFee + useFee) * 0.09;
		}
		else {
			basicFee = 660;
			useFee = (extraFee100 * 100) + (extraFee200 * (usage % 100));
			tax = (basicFee + useFee) * 0.09;
		}
		break;
	case 2:
		if (usage == 200) {
			basicFee = 660;
			useFee = (extraFee100 * 100) + (extraFee200 * 100);
			tax = (basicFee + useFee) * 0.09;
		}
		else {
			basicFee = 1130;
			useFee = (extraFee100 * 100) + (extraFee200 * 100) + (extraFee300 * (usage % 100));
			tax = (basicFee + useFee) * 0.09;
		}
		break;
	case 3:
		if (usage == 300) {
			basicFee = 1130;
			useFee = (extraFee100 * 100) + (extraFee200 * 100) + (extraFee300 * 100);
			tax = (basicFee + useFee) * 0.09;
		}
		else {
			basicFee = 2710;
			useFee = (extraFee100 * 100) + (extraFee200 * 100) + (extraFee300 * 100) + (extraFee400 * (usage % 100));
			tax = (basicFee + useFee) * 0.09;
		}
		break;
	case 4:
		if (usage == 400) {
			basicFee = 2710;
			useFee = (extraFee100 * 100) + (extraFee200 * 100) + (extraFee300 * 100) + (extraFee400 * 100);
			tax = (basicFee + useFee) * 0.09;
		}
		else {
			basicFee = 5130;
			useFee = (extraFee100 * 100) + (extraFee200 * 100) + (extraFee300 * 100) + (extraFee400 * 100) + (extraFee500 * (usage % 100));
			tax = (basicFee + useFee) * 0.09;
		}
		break;
	case 5:
		if (usage == 500) {
			basicFee = 5130;
			useFee = (extraFee100 * 100) + (extraFee200 * 100) + (extraFee300 * 100) + (extraFee400 * 100) + (extraFee500 * 100);
			tax = (basicFee + useFee) * 0.09;
		}
		else {
			basicFee = 9330;
			useFee = (extraFee100 * 100) + (extraFee200 * 100) + (extraFee300 * 100) + (extraFee400 * 100) 
				+ (extraFee500 * 100) + (extraFeeOver * (usage % 100));
			tax = (basicFee + useFee) * 0.09;
		}
		break;
	default :
		basicFee = 9330;
		useFee = (extraFee100 * 100) + (extraFee200 * 100) + (extraFee300 * 100) + (extraFee400 * 100)
			+ (extraFee500 * 100) + (extraFeeOver * (usage % 100));
		tax = (basicFee + useFee) * 0.09;
		break;
	}

	totalFee = basicFee + useFee + tax;

	printf("이번 달 요금은 %d원입니다.\n", totalFee);
	return 0;
}