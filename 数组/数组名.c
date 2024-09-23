#include<stdio.h>
int main(){
    int temp[] = {1, 2, 3, 4, 5};
    printf("The first element in the array is %d\n", temp[0]);
    printf("The address of the first element in the array is %p\n", temp);
    printf("The first element in the array is %d\n", *temp);
    return 0;
}