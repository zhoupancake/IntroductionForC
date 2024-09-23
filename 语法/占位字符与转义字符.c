#include<stdio.h>

int main(){
    int temp = 32;
    double temp1 = 43.34343432;
    printf("%8d\n", temp);//在宽度为8的长度中右对齐输出
    printf("%-8d\n", temp);//在宽度为8的长度中左对齐输出
    printf("%08d\n", temp);//在宽度为8的长度中右对齐输出，前方用0填充
    printf("%.2lf\n", temp1);//输出两位小数
 	return 0;
}