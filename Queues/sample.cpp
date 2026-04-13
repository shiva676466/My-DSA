#include<iostream>
using namespace std;

#define N 100

int Queue[N];

int front = -1;
int rear = -1;

// start writing functions

void enqueue(int val){
    if(rear == N-1){
        cout << "Overflow\n";
        return;
    } else if(front == -1 && rear == -1){
        front = rear = 0;
        Queue[rear] = val;
    } else{
        rear++;
        Queue[rear] = val;
    }
}

void dequeue(){
    if(front == -1 || front > rear){
        cout << "Underflow\n";
        return;
    }
    front++;
    if(front > rear){
        front = rear = -1;
    }
}

bool isEmpty(){
    return front == -1 && rear == -1;
}

bool isFull(){
    return rear == N-1;
}

int peek(){
    if(front == -1 && rear == -1){
        return -1;
    }
    return Queue[rear];
}

void display(){
   if(isEmpty()){
      cout << "Empty queue\n";
      return;
   }
   for(int i = front; i <= rear; i++){
      cout << Queue[i] << " ";
   }
   cout << '\n';
}

int main(void){
    enqueue(1);
   enqueue(2);
   enqueue(3);
   enqueue(4);
   enqueue(5);

   display();

   dequeue();

   display();
    return 0;
}