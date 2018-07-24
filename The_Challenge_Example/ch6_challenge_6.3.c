#include<stdio.h>

int main() {

	int year, month, day;

	int start, end, lastVal;

	while (1) {
		printf("> 년, 월을 입력하세요(종료는 0)");
		scanf("%d", &year);
		if (year == 0) break;
		scanf("%d", &month);
		day = 0;
		for (int i = 1; i < year; i++) {
			if (i % 4 != 0) day += 365;
			else {
				if (i % 100 == 0) {
					if (i % 400 == 0) {
						day += 366;
					}
					else day += 365;
				}
				else {
					day += 366;
				}
			}
		}
		switch(month) {
			case 1:
				day = day;
				end = 31;
				break;
			case 2:
				day += 31;
				if (year % 4 == 0) {
					if (year % 100 == 0) {
						if (year % 400 == 0) {
							end = 29;
						}
						else end = 28;
					}
					else end = 29;
				}
				break;
			case 3:
				if (year % 4 == 0) day += (31 + 29);
				else {
					day += (31 + 28);
					end = 31;
				}
				break;
			case 4:
				if (year % 4 == 0) day += (31 + 29 + 31);
				else {
					day += (31 + 28 + 31);
					end = 30;
				}

				break;
			case 5:
				if (year % 4 == 0) day += (31 + 29 + 31 + 30);
				else {
					day += (31 + 28 + 31 + 30);
					end = 31;
				}
				break;
			case 6:
				if (year % 4 == 0) day += (31 + 29 + 31 + 30 + 31);
				else {
					day += (31 + 28 + 31 + 30 + 31);
					end = 30;
				}
				break;
			case 7:
				if (year % 4 == 0) day += (31 + 29 + 31 + 30 + 31 + 30);
				else {
					day += (31 + 28 + 31 + 30 + 31 + 30);
					end = 31;
				}
				break;
			case 8:
				if (year % 4 == 0) day += (31 + 29 + 31 + 30 + 31 + 30 + 31);
				else {
					day += (31 + 28 + 31 + 30 + 31 + 30 + 31);
					end = 31;
				}
				break;
			case 9:
				if (year % 4 == 0) day += (31 + 29 + 31 + 30 + 31 + 30 + 31+ 31);
				else {
					day += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31);
					end = 30;
				}
				break;
			case 10:
				if (year % 4 == 0) day += (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30);
				else {
					day += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30);
					end = 31;
				}
				break;
			case 11:
				if (year % 4 == 0) day += (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31);
				else {
					day += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31);
					end = 30;
				}
				break;
			case 12:
				if (year % 4 == 0) day += (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30);
				else {
					day += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30);
					end = 31;
				}
				break;
			default:
				printf("달 입력이 이상합니다.\n");
				continue;
		}


		day++;

		printf("\n             %4d년 %2d월 \n", year, month);
		printf("             ===========\n");
		printf("------------------------------------\n");
		printf("  SUN  MON  TUE  WED  THU  FRI  SAT\n");
		printf("------------------------------------\n");

		start = day % 7;
		for (int i = 0; i<start; i++)
		{
			printf("     ");
		}

		for (int i = 1; i <= end; i++)
		{
			printf("%5d", i);
			if ((start + i) % 7 == 0) printf("\n");
			lastVal = i;
		}

		if ((start + lastVal - 1) % 7 != 0) printf("\n");
		printf("\n");
	}
	return 0;
}