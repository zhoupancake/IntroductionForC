//局部变量4
#include<stdio.h>
void printNumber(int temp);
int main(){
    int temp = 10;
    for(int i = 0;i < 10;i++)
        printNumber(temp);
    //printf("The variable temp is printed %d times.\n", i);
    //上面这行代码会报错，因为在for循环中定义的i是在循环开始时定义的，无法访问
    return 0;
}

void printNumber(int temp){
    printf("The number you set is %d\n", temp);
}