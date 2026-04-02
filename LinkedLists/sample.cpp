#include<cstddef>
#include<iostream>
using namespace std;

class Node{
public: 
    int data;
    Node* next;

    Node(int value){        // constructor
        data = value;
        next = NULL;
    }
};

class LinkedList{
private:
    Node* head;
    Node* tail;
public:
    // intially head = tail = null
    LinkedList(){
        head = tail = NULL;
    }

    // now start implementing the 5 main functions

    // pushfront
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    // popfront
    void pop_front(){
        if(head == NULL){
            cout << "LL is empty\n";
            return;// there are two ways to create objs for a class they are: 
        // 1.creating in stack memory like "List.ll_1"
        // 2. creating in heap memory like "Node* newnode = new Node(val)" for this we have to use the "new" keyword
        // this new kw will allocate and assigns the value to the variable and calls the constructor.
        } else {
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    // pushback
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    // popback
    void pop_back(){
        if(head == NULL){
            cout << "Emtpy linked list\n";
            return;
        }
        if(head == tail) {     // only one node
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;    // only deletes the memory not the variable
        tail = temp;
        tail->next = NULL;
    }
    // insertAtMiddle
    void insert(int val, int pos){
        if(pos < 0){
            cout << "Invalid position\n";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i = 0; i < pos - 1; i++){
            if(temp == NULL){
                cout << "Invalid position\n";
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    // count
    int count(){
        int count_ = 0;
        Node* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            count_++;
        }
        return count_;
    }
    // find middle node (two-pass method)
    Node* getMiddle(){
        if(head == NULL){
            cout << "Linked list is empty\n";
            return NULL;
        }
        int total = 0;
        Node* temp = head;
        while(temp != NULL){
            total++;
            temp = temp->next;
        }
        int middle = total / 2;
        temp = head;
        for(int i = 0; i < middle; i++){
            temp = temp->next;
        }
        return temp;
    }
    // display
    void display(){
        // check for emptyness
        if(head == NULL){
            cout << "Empty linked list" << endl;
            return;
        }
        Node* temp = head;
        while ((temp != NULL)){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    LinkedList ll_1;

    ll_1.push_back(1);
    ll_1.push_back(2);
    ll_1.push_back(3);
    ll_1.push_back(4);
    ll_1.push_back(5);

    ll_1.pop_back();

    ll_1.pop_front();

    ll_1.push_front(8);
    
    ll_1.display();

    cout << "No of nodes are : " << ll_1.count() << endl;
    Node* mid = ll_1.getMiddle();
    cout << "Middle to end: ";
    while(mid != NULL){
        cout << mid->data << " -> ";
        mid = mid->next;
    }
    cout << "NULL" << endl;
    return 0;
}