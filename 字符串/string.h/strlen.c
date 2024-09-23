#include<stdio.h>
#include<string.h>
int main(){
    char str1[64];
    strcpy(str1, "Hello");
    printf("The length of str1 is %d\n", strlen(str1));
    printf("The size of str1 is %d\n", sizeof(str1));
    return 0;
}