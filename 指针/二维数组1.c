#include<stdio.h>
int main(){
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i = 0;i < 2;i++){
        printf("The address of the first element in arr[%d] is %p\n", i, &arr[i]);
        for(int j = 0;j < 3;j++){
            printf("the address of number %d is %p\n", arr[i][j], &arr[i][j]);
        }
    }
    return 0;
}