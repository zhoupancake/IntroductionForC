#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;
int add_end(Node* head, int num);
int add_front(Node* head, int num);
int remove1(Node* head, int num);
int search(Node* head, int num);
int modify(Node* head, int num1, int num2);
int tranves(Node* head);
int main(){
    Node *head = (Node*)malloc(sizeof(Node));
        head->next = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    printf("add_front\n");
    for(int i = 0;i < 5;i++)
        add_front(head, arr[i]);
    tranves(head);
    printf("add_end\n");
    for(int i = 0;i < 5;i++)
        add_end(head, arr[i]+6);
    tranves(head);
    printf("modify\n");
    modify(head, 1, 31);
    tranves(head);
    printf("delete\n");
    remove1(head, 4);
    tranves(head);
    printf("search\n");
    printf("%d\n", search(head, 5));
    free(head);
    return 0;
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

int add_end(Node* head, int num){
    Node *temp = head;
    Node* temp1 = (Node*)malloc(sizeof(Node));
    temp1->data = num;
    temp1->next = NULL;  // 确保新节点的next为NULL

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = temp1;
    return 0;
}

int remove1(Node* head, int num){
    Node *current = head->next, *pre = head;
    while(current != NULL){
        if(num == current->data){
            pre->next = current->next;
            free(current);
            return 1;
        }
        pre = pre->next;
        current = current->next;
    }
    return 1;
}

int modify(Node *head, int num1, int num2){
    Node *temp = head;
    while(temp->next != NULL){
        if(num1 == temp->data){
            temp->data = num2;
            break;
        }
        temp = temp->next;
    }
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