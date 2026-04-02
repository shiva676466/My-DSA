#include<cstddef>
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){         // constructor
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLL{
private:
    Node* head;
    Node* tail;
public:
    DoublyLL(){       // constructor
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    void pop_front(){
        if(head == NULL){
            cout << "Empty LinkedList\n";
            return;
        }
        Node* temp = head;
        if(head == tail){
            head = tail = NULL;
        }
        else{
            head = head->next;
            head->prev = NULL;
        }
        delete temp;        // freeing up the temp's memory
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    void pop_back(){
        if(head == NULL){
            cout << "Empty LL\n";
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }

    void printDLL(){
        cout << "\nLinked list is: \n";
        if(head == NULL){
            cout << "Empty Linked List\n";
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " <--> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    DoublyLL dll;

    dll.push_front(40);
    dll.push_front(30);
    dll.push_front(20);
    dll.push_front(10);

    dll.printDLL();

    dll.pop_front();

    dll.printDLL();
    
    dll.push_back(50);

    dll.printDLL();
    
    dll.push_front(10);

    dll.printDLL();
    
    dll.pop_back();
    
    dll.printDLL();
}