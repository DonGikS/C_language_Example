#include<stdio.h>


int main(void) {

	char *ps = "banana";

	while (*ps != '\0') {
		printf("%s\n", ps);
		ps++;
	}
	/*����Ǵ� ���
		banana
		anana
		nana
		ana
		na
		a
	
	*/


	return 0;
}