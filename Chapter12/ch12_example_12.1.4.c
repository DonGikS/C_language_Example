#include<stdio.h>

int main(void) {

	char ani[20];
	char why[80];

	printf("좋아하는 동물 : ");
	scanf("%s", ani);
	getchar();//버퍼 정리
	//scanf("%*c");
	//fgetc(stdin);
	//위의 함수도 사용가능.	
	printf("좋아하는 이유 : ");
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);



	return 0;
}