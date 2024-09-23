#include<stdio.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;
int add_front(Node* head, int num);
int tranves(Node* head);
int search(Node* head, int num);
int main(){
    Node *head = (Node*)malloc(sizeof(Node));
        head->next = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    printf("add_front\n");
    for(int i = 0;i < 5;i++)
        add_front(head, arr[i]);
    tranves(head);
    free(head);
}

int tranves(Node* head){
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
        printf("%d ", temp->data);
    }
    printf("\n");
}

int add_front(Node* head, int num){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = num;
    temp->next = head->next;
    head->next = temp;
    return 0;
}

int search(Node* head, int num){
    Node *current = head->next, *pre = head;
    while(current != NULL){
        if(num == current->data){
            return current->data;
        }
        pre = pre->next;
        current = current->next;
    }
    return 1;
}