#include<stdio.h>
int main(){
    char temp[] = "This is a test string.";
    char temp1[6];
    temp1[0] = 'H';
    temp1[1] = 'e';
    temp1[2] = 'l';
    temp1[3] = 'l';
    temp1[4] = 'o';
    printf("%s\n", temp1);
    temp1[5] = '\0';
    printf("%s\n", temp1);
    return 0;
}