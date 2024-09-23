#include<stdio.h>
int main(){
	double arr[] = {1, 2, 3, 4, 5};
    double *p = arr;
    for(int i = 0;i < 5;i++)
        printf("the address of %lf is %p\n", *(p + i), &arr[i]);
    return 0;
}