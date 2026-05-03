#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    // constructor
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* head = NULL;

// start writing functions from here onwards

// insert at start (push_front())
void push_front(int el){
    Node* newNode = new Node(el);
    head = newNode;
}

// insert at end (push_back())
void push_back(int el){
    Node* newNode = new Node(el);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL){
        // temp exactly stops just before the 'NULL'
        temp = temp->next;
    }
    temp->next = newNode;
}

// delete from start (pop_front())
void pop_front(){
    if(head == NULL){
        cout << "Linked List is empty!\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// delete from end (pop_back())
void pop_back(){
    if(head == NULL){
        cout << "Linked List is empty!";
        return;
    }
    if(head->next == NULL){
        // idhi okka node kosam condition (lan: telugu)
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}