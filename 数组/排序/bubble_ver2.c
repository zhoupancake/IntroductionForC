#include<stdio.h>
void printArr(int* arr);
void bubble_original();
void bubble_update();
int main(){
	bubble_original();
    bubble_update();
    return 0;
}

void printArr(int* arr){
    for(int i = 0;i < 7; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

void bubble_original(){
    int temp[] = {67, 35, 12, 45, 6, 56, 23};
    printf("initial array: \n");
    printArr(&temp);
    int count = 0, compare = 0; 
    for(int i = 0;i < 7 - 1;i++)
        for(int j = 0;j < 7 - 1;j++){
            compare++;
            if(temp[j] > temp[j+1]){
                count++;
                int temp1 = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = temp1;
            }
        }
    printf("final result: \n");
    printArr(&temp);
    printf("original bubble compares %d times, exchanges %d times.\n", compare, count);
}

void bubble_update(){
    int temp[] = {67, 35, 12, 45, 6, 56, 23};
    printf("initial array: \n");
    printArr(&temp);
    int count = 0, compare = 0; 
    for(int i = 0;i < 7 - 1;i++)
        for(int j = 0;j < 7 - 1 - i;j++){
            compare++;
            if(temp[j] > temp[j+1]){
                count++;
                int temp1 = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = temp1;
            }
        }
    printf("final result: \n");
    printArr(&temp);
    printf("updated bubble compares %d times, exchanges %d times.\n", compare, count);
}