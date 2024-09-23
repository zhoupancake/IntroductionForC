#include<stdio.h>
#include<string.h>
typedef struct Student{
    char name[64];
    char studentID[64];
    int age;   
}Student;
int main(){
    Student s[5];
    char name1[] = "pancake";
    char ID[] = "2019";
    for(int i = 0;i < 5;i++){
        strcpy(s[i].name, name1);
        strcpy(s[i].studentID, ID);
        s[i].age = 8;
    }
    for(int i = 0;i < 5;i++)
 	   printf("%s %s %d\n", s[i].name, s[i].studentID, s[i].age);
    return 0;
}