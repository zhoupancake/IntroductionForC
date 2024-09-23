#include<stdio.h>
void sum(int a, int b);
int main(){
    int var1 = 10, var2 = 20, var3 = 30, var4 = 40;
    sum(var1, var2);
    sum(var3, var4);
    return 0;
}

void sum(int a, int b){
    printf("The sum of the %d and %d is %d", a, b, a + b);
}