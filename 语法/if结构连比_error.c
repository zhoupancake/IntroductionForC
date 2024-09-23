#include<stdio.h>
void printNumber(int number);
int main(){
    int a, b, c;
    printf("This program should output the greatest number among the three\n");
    printf("please input three numbers using black to divide:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a < b < c)
        printNumber(c);
    if(a < c < b)
        printNumber(b);
    if(b < a < c)
        printNumber(c);
    if(b < c < a)
		printNumber(a);
    if(c < b < a)
		printNumber(a);
    if(c < a < b)
		printNumber(b);
  	return 0;
}

void printNumber(int number){
    printf("The greatest numbers among inputed is %d\n", number);
}