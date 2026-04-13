#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

Node* front = NULL;
Node* rear = NULL;


void enqueue(int val){
    // creating n intialising the new node
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if(front == NULL && rear == NULL){
        // checking for emptyness if yes then both the ptrs points to the newNode only.
        front = rear = newNode;
    } else {
        // if queue is not empty then the rear points to next node then updates.
        rear->next = newNode;
        rear = newNode;
    }
}


void dequeue(){
    if(front == NULL){
        cout << "Underflow\n";
        return;
    }
    // we can only delete the front element in queue so we must have to delete queue's front.
    // so we intialise temp ptr to front then move front forwards then delete temp so that front will be removed.
    Node* temp = front;
    front = front->next;

    if(front == NULL){
        rear = NULL;
    }

    delete temp;
}

int peek(){
    if(front == NULL){
        return -1;
    }
    return front->data;
}

void display(){
    Node* temp = front;

    if(temp == NULL){
        cout << "Empty queue\n";
        return;
    }

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(void){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();
    
    return 0;
}