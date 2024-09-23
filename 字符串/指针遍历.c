#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Hello";
    char *p = str1;
	for(int i = 0;i < strlen(str1);i++)
        printf("%c\n", *(p + i));
    return 0;
}