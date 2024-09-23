#include<stdio.h>
int main(){
    int num = 10;
    int *p;
    p = &num;
    
    printf("The address of the number is %p\n", p);
    printf("The value of the number is %d\n", *p);
    return 0;
}