#include<stdio.h>
void printArr(int* arr);
int main(){
    int temp[] = {67, 35, 12, 45, 6, 56, 23};
    printf("initial array: \n");
    printArr(&temp);
    int count = 0; 
    for(int i = 0;i < 7 - 1;i++)
        for(int j = 0;j < 7 - 1;j++){
            if(temp[j] > temp[j+1]){
                count++;
                int temp1 = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = temp1;
                printf("exchange %d times\n", count);
                printArr(&temp);
            }
        }
    printf("final result: \n");
    printArr(&temp);
    return 0;
}

void printArr(int* arr){
    for(int i = 0;i < 7; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}