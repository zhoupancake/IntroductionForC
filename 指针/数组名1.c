#include<stdio.h>
void swap(int *a, int *b);
int main(){
	int a = 10, b = 20;
    int *p2a = &a, *p2b = &b;
    printf("a: %d, b: %d\n", a, b);
    swap(p2a, p2b);
     printf("a: %d, b: %d\n", a, b);
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}