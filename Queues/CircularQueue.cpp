#include<iostream>
using namespace std;

#define N 5
int queuee[N];
int front = -1, rear = -1;


void enqueue(int val){
    if((rear + 1) % N == front){
        cout << "Queue is full\n";
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear = (rear + 1) % N;
    queuee[rear] = val;
}

void dequeue(){
    if(front == -1){
        cout << "Queue is empty\n";
        return;
    }
    if(front == rear){
        front = rear = -1;
    } else{
        front = (front + 1) % N;
    }
}

void display(){
    if(front == -1){
        cout << "Queue is empty\n";
        return;
    }
    int i = front;
    while(1){
        cout << queuee[i];
        if(i == rear){
            break;
        }
        i = (i + 1) % N;
    }
    cout << endl;
}


int main(){

    enqueue(3);
    enqueue(2);
    enqueue(1);

    display();

    dequeue();

    display();

    return 0;
}