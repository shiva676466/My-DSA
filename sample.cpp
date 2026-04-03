#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> array = {

    {10, 20, 30}, 
  {40, 50, 60}
  
};

  cout << array[0][0] << "\n";
  cout << array[0][1] << "\n";
  cout << array[0][2] << "\n";
  cout << array[1][2] << "\n";

  return 0;
}