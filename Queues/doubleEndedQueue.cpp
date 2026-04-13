#include <iostream>

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