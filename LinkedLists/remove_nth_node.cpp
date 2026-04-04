#include<iostream>
using namespace std;

struct Node {

    int data;
    struct Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Solution{
public:
    Node* deleteNode(Node* head, int k){
        // handle edge cases for: empty list & for k = 1.
        if(head == NULL){
            return NULL;
        }
        if(k == 1){              // for k = 1
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        Node *temp = head;
        // move to the node just before the target node (k-1)th node for deleting the kth node.
        for(int i = 1; i < k - 1 && temp->next != NULL; i++){
            temp = temp->next;
        }

        if(temp->next != NULL){
            Node* del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }

        return head;
    }
};



int main(void){

    struct Node* ll;

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // creating obj
    Solution obj;

    int k = 3;

    head = obj.deleteNode(head, k);

    // printing the list after operation
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}