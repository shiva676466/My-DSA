#include <iostream>
#include <stack>
using namespace std;

stack<int> delete_mid_element(stack<int> s) {

  /* to delete middle element in a stack
   pop the elements in the stack before the mid element comes
   then pop the mid element and then push remaining elements return in the
   stack */

  int n = s.size();
  int mid = n / 2;

  stack<int> temp;

  for (int i = 0; i < mid; i++) {
    temp.push(s.top());
    s.pop();
  }
  s.pop(); // deleting the middle element

  while (!temp.empty()) {
    s.push(temp.top());
    temp.pop();
  }

  return s;
}

int main() {

  stack<int> s;

  // pushing elements into stack
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  // calling function
  s = delete_mid_element(s);

  // printing stack after deleting middle element
  cout << "Stack after deleting middle element:\n";

  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }

  return 0;
}