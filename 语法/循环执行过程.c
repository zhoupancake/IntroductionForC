#include<stdio.h>
int main(){
    //while循环
    int i = 0;
    while(i < 10)//判断语句（1）（4）
    {
        //循环体（2）
        printf("test codes for while cycle.\n");
        //自增条件（3）
        i++;
    }
    
    //do while循环
    int j = 0;
    do
    {
        //循环体（1）（4）
        printf("test codes for do while cycle.\n");
        //自增条件（2）
        j++;
    }
    while(j < 10);//判断语句（3）
    
    //for循环
    for(int i = 0/*初始化语句（1）*/;i < 10/*判断条件（2）（5）*/;i++/*自增条件（4）*/)
    {
        //循环体（3）
        printf("test codes for for cycle.\n");
    }
}