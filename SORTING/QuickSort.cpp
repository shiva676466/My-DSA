#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end) {

  int pivot = arr[end];
  int idx = st - 1;

  for (int j = st; j < end; j++) {
    if (arr[j] <= pivot) {
      idx++;
      swap(arr[idx], arr[j]);
    }
  }

  swap(arr[idx + 1], arr[end]);
  return idx + 1;
}

void QuickSort(vector<int> &arr, int st, int end) {
  if (st < end) {
    int piv_idx = partition(arr, st, end);

    QuickSort(arr, st, piv_idx - 1);  // for the left half
    QuickSort(arr, piv_idx + 1, end); // for the right half
  }
}

int main() {
  vector<int> arr = {5, 3, 1, 2, 6};

  QuickSort(arr, 0, arr.size() - 1);

  for (int val : arr)
    cout << val << " ";
  cout << endl;

  return 0;
}



/* 
TC: 

best case = O(n logn)
worst case = O(n^2)

SC: O(log n) 
*/