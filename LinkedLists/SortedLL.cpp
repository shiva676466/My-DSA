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

    // --------- MERGE SORT FOR LINKED LIST ---------

    Node* merge(Node* left, Node* right){
        if(left == NULL) return right;
        if(right == NULL) return left;

        if(left->data < right->data){
            left->next = merge(left->next, right);
            return left;
        } else {
            right->next = merge(left, right->next);
            return right;
        }
    }

    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* mergeSort(Node* head){
        // this is to handle single element in the linked list
        if(head == NULL || head->next == NULL){
            return head;
        }

        Node* mid = getMid(head);
        Node* rightHead = mid->next;
        mid->next = NULL;

        Node* left = mergeSort(head);
        Node* right = mergeSort(rightHead);

        return merge(left, right);
    }

    void sort(){
        head = mergeSort(head);

        // update tail
        Node* temp = head;
        while(temp && temp->next != NULL){
            temp = temp->next;
        }
        tail = temp;
    }
};

int main(){
    LinkedList ll_1;

    ll_1.push_back(1);
    ll_1.push_back(2);
    ll_1.push_back(3);
    ll_1.push_back(4);
    ll_1.push_back(5);

    ll_1.push_front(8);
    
    ll_1.sort();
    ll_1.display();

    
    return 0;
}