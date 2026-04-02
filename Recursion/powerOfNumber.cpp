#include <iostream>
using namespace std;

int power(int x, int y) {
  if (y == 0) {
    return 1;
  } else if (x == 0) {
    return 0;
  } else {
    return x * power(x, y - 1);
  }
}

int main(){
    int x = 2, y = 3;
    cout << power(x, y) << endl;
    return 0;
}