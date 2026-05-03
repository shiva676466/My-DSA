#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;

  // constructor
  Node(int val) {
    data = val;
    next = NULL;
  }
};

Node *head = NULL;

// start writing functions from here onwards

// insert at start (push_front())
void push_front(int el) {
  Node *newNode = new Node(el);
  newNode->next = head;
  head = newNode;
}

// insert at end (push_back())
void push_back(int el) {
  Node *newNode = new Node(el);

  if (head == NULL) {
    head = newNode;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL) {
    // temp exactly stops just before the 'NULL'
    temp = temp->next;
  }
  temp->next = newNode;
}

// delete from start (pop_front())
void pop_front() {
  if (head == NULL) {
    cout << "Linked List is empty!\n";
    return;
  }
  Node *temp = head;
  head = head->next;
  delete temp;
}

// delete from end (pop_back())
void pop_back() {
  if (head == NULL) {
    cout << "Linked List is empty!";
    return;
  }
  if (head->next == NULL) {
    // idhi okka node kosam condition (lan: telugu)
    delete head;
    head = NULL;
    return;
  }
  Node *temp = head;
  while (temp->next->next != NULL) {
    temp = temp->next;
  }
  delete temp->next;
  temp->next = NULL;
}

// insert at pos (insert())
void insert(int el, int pos) {
  if (pos < 0) {
    // for -ve positions
    cout << "Invalid Position\n";
    return;
  }
  if (pos == 0) {
    // for position = 0
    push_front(el);
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++) {
    if (temp == NULL) {
      cout << "Invalid Position\n";
      return;
    }
    temp = temp->next;
  }
  if (temp == NULL) {
    cout << "Invalid Position!\n";
    return;
  }
  Node *newNode = new Node(el);
  newNode->next = temp->next;
  temp->next = newNode;
}

// search with target (search()) - its like 'isExist()' fn
bool search(int target) {
  Node *temp = head;
  while (temp != NULL) {
    if (temp->data == target) {
      return true;
    }
    temp = temp->next;
  }
  return false;
}

// checking for emptyness (isEmpty())
bool isEmpty() { return head == NULL; }

// printing the linked list (display())
void display() {
  if (head == NULL) {
    cout << "Linked List is empty!\n";
    return;
  }
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL\n";
}

int main(void) {
  cout << "Is Empty: " << isEmpty() << endl;

  push_front(10);
  push_front(20);
  push_front(30);
  push_front(40);
  push_back(0);
  insert(12, 5);
  cout << search(10) << endl;
  cout << search(100) << endl;
  display();

  return 0;
}