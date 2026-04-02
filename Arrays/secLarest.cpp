#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> nums = {1, 2, 3, 4, 5, 4, 9, 9, 8};
  int largest = nums[0];
  int secLargest = -1;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > largest) {
      secLargest = largest;
      largest = nums[i];
    } else if (nums[i] > secLargest && nums[i] != largest) {
      secLargest = nums[i];
    }
  }

  cout << secLargest << '\n';
  return 0;
}