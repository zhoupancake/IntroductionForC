#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "hello";
	char str2[] = " world!";
    printf("The address of str1 is %p\n", str1);
    strcat(str1, str2);
    printf("The address of str1 is %p\n", str1);
    return 0;
}