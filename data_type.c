#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Hello World";
    char *p = str1;
	for(int i = 0;i < strlen(str1)/2;i++)
        printf("%c\n", *(p + (2 * i)));
    printf("%s\n", (6+p));
    return 0;
}