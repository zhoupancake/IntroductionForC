#include<stdio.h>
int main(){
    //声明并初始化（√）
    int temp[] = {0, 1, 2, 3, 4};
    
    //声明后初始化（√）
    int temp1[5];
    for(int i = 0; i < 5;i++)
        temp1[i] = i;
    for(int i =0;i < sizeof(temp1)/sizeof(temp1[0]);i++)
        temp1[i] = i;
    
    //声明并初始化（X）
    int temp2[5] = {0, 1, 2, 3, 4};
}