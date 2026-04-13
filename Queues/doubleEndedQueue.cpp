#include <iostream>
using namespace std;

#define N 100

// Double-Ended Queue is a special type of queue where we can:
//      - insert from front n rear
//      - delete from front n rear
int Dequeue[N];

// ===================================================================================================================================
// C++ STL implementation

#include <deque>
using namespace std;

int main(void) {
  deque<int> dq;

  dq.push_front(10);
  dq.push_back(20);
  dq.push_back(10);

  for (int x : dq)
    cout << x << " ";

  cout << endl;

  return 0;
}