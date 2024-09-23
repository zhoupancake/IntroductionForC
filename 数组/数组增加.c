#include<stdio.h>
int main(){
    int temp1[5];
    for(int i = 0; i < 5;i++)
        temp1[i] = i;
    int copied[10];
    int index = 0;
    for(index = 0; index < 5;index++)
        copied[index] = temp1[index];
    copied[index] = 5;
    return 0;
}