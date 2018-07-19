#include<stdio.h>

int main() {
	
	printf("%s\n", (sizeof(short) > sizeof(long)) ? "short" : "long");

	return 0;
}