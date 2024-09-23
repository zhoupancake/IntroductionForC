#include<stdio.h>
void sum(int a, int b);//对函数的预定义
int main(){
    int var1 = 10, var2 = 20, var3 = 30, var4 = 40;
    sum(var1, var2);	//对函数的调用
    sum(var3, var4);	//对函数的调用
    return 0;
}

void/*返回值类型*/ sum/*函数名*/(int a, int b/*参数列表*/){
    //函数体
    printf("The sum of the %d and %d is %d", a, b, a + b);
    //返回值
    //return 0;
}