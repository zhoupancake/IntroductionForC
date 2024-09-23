#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "hello";
	char str2[64];
    strcpy(str2, str1);
    printf("fuck\n");
    printf("The address of str1 is %p\n", str1);
    printf("The address of str2 is %p\n", str2);
    return 0;
}