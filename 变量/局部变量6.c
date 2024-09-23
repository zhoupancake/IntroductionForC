//局部变量6
#include<stdio.h>
void printNumber(int temp);
int main(){
    int temp = 10, i;
    while(i < 10){
        printNumber(temp);
        i++;
    }
    return 0;
}

void printNumber(int temp){
    printf("The number you set is %d\n", temp);
}