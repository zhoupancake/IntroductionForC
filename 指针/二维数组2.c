#include<stdio.h>
int main(){
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = arr;
    for(int i = 0;i < 6;i++){
        printf("%d\n", *(p + i));
    }
    return 0;
}