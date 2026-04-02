#include <algorithm>
#include <iostream>
using namespace std;

// BUBBLE SORT
void BubbleSort(int arr[], int n) {

  bool swapped;
  for (int i = 0; i < n - 1; i++) {
    swapped = false;
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped) break;
  }

  for (int val = 0; val < n; val++) {
    cout << arr[val] << " ";
  }
  cout << endl;
}

void SelectionSort();
void InsertionSort();
void MergeSort();
void QuickSort();

int main() {
  int arr[] = {1, 2, 3, 6, 5, 4, 8, 7};
  int n = 8;

  BubbleSort(arr, n);

  return 0;
}