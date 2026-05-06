#include<iostream>
using namespace std;

/* 
Queue is a linear data structure that will follow the FIFO(First In First Out) which means that the element which is inserted first will 
be deleted first (just like a real world 'queue')

There are mainly 4 types in queue:
1. Simple Queue: Normal FIFO behaviour
2. Circular Queue: Last element is connected to the first element
3. Priority Queue: Elements are dequeued based on priority
4. Deque(Double Ended Queue): Elements can be added/removed from both ends
 
*/

#define N 5
 int Queue[N];
 int front = -1, rear = -1;

//  Visual Representation....
//  Front → [10] [20] [30] ← Rear
//           ↑             ↑
//         removed      inserted
// we insert elements from the rear(back) part and delete elemets from the front part
// =============================== enequeue() ======================================
 void enqueue(int val){
   //  check for overflow condition(fullness)
   if(rear == N - 1){
      cout << "Overflow\n";
      return;
   } else if(front == -1 && rear == -1){     // both are pointing to -1 (emptyness)
      front = rear = 0;     // firstly update both the pointers to the first pos and then insert the value
      Queue[rear] = val;
   } else{             // queue is already having some elements
      rear++;  
      Queue[rear] = val;    // we always insert elements from the rear part
   }
 }
 
//  ============================== dequeue() =======================================
void dequeue(){
  if(front == -1 || front > rear){
   cout << "Underflow\n";
   return;
  }
  front++;
//   front++ means ignoring the element this means indirectly removing it.
  if(front > rear){
// this condition will true when the last element is removed because if all the elements were removed then the front becomes >= rear
   front = rear = -1;
  }
}

//  ============================== isEmpty() =======================================
bool isEmpty(){
   return front == -1 && rear == -1;
}

//  ============================== isFull() =======================================
bool isFull(){
   return rear == N - 1;
}

//  ============================== peek() =======================================
int peek(){
   if(front == -1 && rear == -1){
      return -1;
   } return Queue[front];
}

//  ============================== display() =======================================
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

//  ============================== size() =======================================
int size(){
   if(isEmpty()){
      return 0;
   }
   return rear - front + 1;
}


int main(){

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