#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* insertAtBeginning(struct Node* head, int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if(head == NULL)
        return newNode;

    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

struct Node* deleteValue(struct Node* head, int value){
    if(head == NULL){
        return head;
    }

    if(head->data == value){
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node* curr = head;
    while(curr->next != NULL && curr->next->data != value){
        curr = curr->next;
    }

    if(curr->next != NULL){
        struct Node* temp = curr->next;
        curr->next = temp->next;
        free(temp);
    }

    return head;
}

void printList(struct Node* head){
    struct Node* temp;
    while (head != NULL){
      printf("%d -> ", temp->data);
      temp = temp->next;
    }
    
    printf("NULL\n");
}

void freeList(struct Node* head){
    struct Node* temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}


int main(){
    struct Node* head = NULL;

    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 40);

    printList(head);

    return 0;
}