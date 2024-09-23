#include<stdio.h>
int main(){
    char temp[100];
    scanf("%s", temp);//此处不用取地址是因为数组名即为数组的首地址
    // gets(temp);
    printf("The text you input is %s", temp);
    return 0;
}