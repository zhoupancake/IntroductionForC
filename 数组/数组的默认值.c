#include<stdio.h>
int main(){
	int intArr[5];
	double doubleArr[5];
	char charArr[5];
	
	printf("The default value of the initial array is:\n");
	printf("int: %d\n", intArr[0]);
	printf("double: %lf\n", doubleArr[0]);
	printf("char: %c\n", charArr[0]);
	return 0;
}