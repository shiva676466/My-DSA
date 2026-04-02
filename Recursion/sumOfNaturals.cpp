#include <iostream>
using namespace std;

int sumOfNaturals(int n) {
  if (n == 0)
    return 1;

  return n + sumOfNaturals(n - 1);
}

int main() {

  int n = 5;

  cout << sumOfNaturals(n) << endl;

  return 0;
}

// TC = SC = O(n)