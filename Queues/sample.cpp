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