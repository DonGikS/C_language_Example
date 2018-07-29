#include<stdio.h>
#include<string.h>


int main(void){
	
	char str[80] = "bananajuice";

	strcpy(str, "apple");
	str[5] = '-';
	//예상되는 결과 apple-juice
	puts(str);
	
	return 0;

}