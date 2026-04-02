#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Stack{
    Node* top;
public:
    Stack(){
        top = NULL;
    }

    ~Stack(){                   /////////// destructor ///////////
        while(top != NULL){
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // we can start writing fns from here
    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        cout << x << " pushed into stack\n";
    }

    void pop(){
        if(top == NULL){
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        cout << top->data << " is popped\n";
        top = top->next;
        delete temp;
    }

    int peek(){
        if(top == NULL){
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        return top == NULL;
    }

    void display(){
        if(top == NULL){
            cout << "Stack is empty nothing to display\n";
            return;
        }
        Node* temp = top;
        while(temp != NULL){
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    cout << "Top element " << s.peek() << endl;

    s.pop();

    s.display();

    cout << "is empty ? " << s.isEmpty() << endl;

    return 0;
}