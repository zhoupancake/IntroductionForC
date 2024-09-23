#include<stdio.h>
void printNumber(int number);
int main(){
    int a, b, c;
    printf("This program should output the greatest number among the three\n");
    printf("please input three numbers using black to divide:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(b >= a && b >= c)
        printNumber(b);
    if(a >= b && a >= c)
        printNumber(a);
    if(c >= a && c >= b)
        printNumber(c);
  	return 0;
}

void printNumber(int number){
    printf("The greatest numbers among inputed is %d\n", number);
}