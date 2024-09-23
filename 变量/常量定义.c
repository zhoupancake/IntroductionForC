#include<stdio.h>
#define PI 3.1415926	//第一种常量的定义方式，可以作为全局变量使用
int main(){
    double diameter;
    const double PI1 = 3.1415926;	//第二种常量定义的方式，使用const关键字
    printf("please input the diameter of the circle:\n");
    scanf("%lf", &diameter);
    printf("The perimeter of the circle is %.2lf\n", PI * diameter);
}