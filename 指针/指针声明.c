#include<stdio.h>
int main(){
    int num = 10;
    int *p;
    p = &num;
    printf("The value stored in %p is %d\n", p, *p);
	return 0;
}