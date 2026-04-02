#include<iostream>
#include<cstddef>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class LinkedList{
private: 
    Node* head;
    Node* tail;
public:
    LinkedList(){ 
        head = tail = nullptr;
    }
    
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void reverseLL(){
        Node* prev = nullptr;
        Node* curr = head;
        Node* next_node = nullptr;
        tail = head;

        while(curr != nullptr){
            next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }
        head = prev;
    }

 };

int main() {
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    cout << "Original List: ";
    list.printList();

    
    cout << "Reversed List: ";
    list.reverseLL();
    list.printList();

    return 0;
}