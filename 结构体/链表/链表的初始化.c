#include<stdio.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;

int main(){
    Node *head = (Node*)malloc(sizeof(Node));
    free(head);
}