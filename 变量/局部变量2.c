//局部变量2
#include<stdio.h>
void printNumber(int temp);
int main(){
    int temp = 10;
    printNumber(temp);
    return 0;
}

void printNumber(int temp){
    printf("The number you set is %d\n", temp);
}