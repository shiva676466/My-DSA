#include <iostream>
using namespace std;

int fibo(int n) {
  if (n == 0) {
    return 0;
  }

  else {
    return fibo(n - 1) + fibo(n - 2);
  }
}

int main(void) {

  int k = 5;
  cout << fibo(k) << " ";

  return 0;
}