//局部变量3
#include<stdio.h>
void printNumber(int temp);
int main(){
    int temp = 10;
    if(temp > 0){
        int temp1 = 20;
        printNumber(temp); //temp的定义在main函数的大括号内，同时在调用之前，故而可以调用
        printNumber(temp1); //temp1的定义在if的大括号内，同时在调用之前，故可以调用
    }
    //printf("%d\n", temp1); 
    //上面这行代码会报错，因为其无法读取到在if结构里面定义的temp1
    return 0;
}

void printNumber(int temp){
    printf("The number you set is %d\n", temp);
}