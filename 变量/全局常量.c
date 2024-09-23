//全局变量
#include<stdio.h>
void canculate();
#define PI 3.1415926
int main(){
	canculate();
    return 0;
}

void canculate(){
    double diameter;
    printf("please input the diameter of the circle:\n");
    scanf("%lf", &diameter);
    printf("The perimeter of the circle is %.2lf\n", PI * diameter);
}