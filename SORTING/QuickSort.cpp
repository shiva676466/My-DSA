#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end) {
				
  int idx = st, pivot = arr[st];

  for (int j = st+1; j <= end; j++) {
    if (arr[j] <= pivot) {
      idx++;
      swap(arr[j], arr[idx]);
    }
  }
//   idx++;
  swap(arr[st], arr[idx]);
  return idx;
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