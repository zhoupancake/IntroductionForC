#include<stdio.h>
#include<string.h>
typedef struct Student{
    char name[64];
    char studentID[64];
    int age;   
}Student;
int main(){
    Student s;
    strcpy(s.name,"pancake");
    s.age = 8;
    strcpy(s.studentID,"2019010101");
    printf("%s %s %d\n", s.name, s.studentID, s.age);
    return 0;
}