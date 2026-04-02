#include <iostream>
#include <stack>
using namespace std;

int main() {

  stack<int> s;

  int mid = s.size();

  s.push(10);
  s.push(20);
  s.push(30);
  cout << s.size() << endl;

  return 0;
}