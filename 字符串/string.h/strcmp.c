#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "hello";
    char str2[] = "hella";
    char str3[] = "hfho";
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmp(str1, str3));
    return 0;
}