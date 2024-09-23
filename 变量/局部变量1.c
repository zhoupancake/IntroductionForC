//局部变量
#include<stdio.h>
void printNumber();
int main(){
    int temp = 10;
    printNumber();
    return 0;
}

void printNumber(){
    printf("The number you set is %d\n", temp);
}
