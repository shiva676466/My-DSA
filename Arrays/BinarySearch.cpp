#include <iostream>
#include <vector>
using namespace std;

int main() {

  // for performing the Binary Search operation the array must be given in
  // sorted
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int l = 0, r = nums.size() - 1;
  int target = 61;
  bool found = false;
  int mid;

  while (l <= r) {
    mid = l + (r - l) / 2;
    if (nums[mid] == target) {
      found = true;
      break;
    } else if (nums[mid] < target) {
      l = mid + 1;
    } else {
      r = mid - 1;
    } 
  }

  if (found) {
    cout << "Found at index: " << mid << '\n';
  } else {
    cout << "Target not found\n";
  }

  return 0;
}
