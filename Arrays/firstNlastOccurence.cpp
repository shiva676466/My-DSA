#include <iostream>
#include <vector>
using namespace std;

/* given a sorted array and target element, find the first and last occurence of
 * that element in the array and return both the indices */

int main() {
  vector<int> arr = {1, 2, 3, 4, 3, 4, 3, 6};
  int target = 3;
  // lets use two pointers

  int first = -1, last = -1;

  int i = 0, j = arr.size() - 1;

  while (i <= j) {
    if (arr[i] == target && first == -1) {
      first = i;
    }
    if (arr[j] == target && last == -1) {
      last = j;
    }
    i++;
    j--;
  }

  cout << "first occ: " << first << endl;
  cout << "last occ: " << last << endl;

  return 0;
}