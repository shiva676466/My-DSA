#include <iostream>
// #include <list>
using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *getMiddle(Node *head) {
  if (!head) {
    return head;
  }

  Node *slow = head;
  Node *fast = head->next;

  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }

  return slow;
}

Node *merge(Node *left, Node *right) {
  if (!left)
    return right;
  if (!right)
    return left;

  Node *result = NULL;

  if (left->data <= right->data) {
    result = left;
    result->next = merge(left->next, right);
  } else{
    result = right;
    result->next = merge(left, right->next);
  }
  return result;
}

Node* mergesort(Node* head){
  if(!head || !head->next)
    return head;

  Node* middle = getMiddle(head);
  Node* NextToMiddle = middle->next;
  middle->next = NULL;

  Node* left = mergesort(head);
  Node* right = mergesort(NextToMiddle);

  return merge(left, right);
}

void printList(Node* head){
  while(head){
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}


int main(){

  Node* head = new Node(4);
  head->next = new Node(2);
  head->next->next = new Node(1);
  head->next->next->next = new Node(3);

  head = mergesort(head);

  printList(head);



  return 0;
}