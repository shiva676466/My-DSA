#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// ALL SORTING ALGORITHMS

// 1. bubble sort
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

// look at the optimised part after done


// 2. selection sort
void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
      int minIdx = i;
      for(int j = i + 1; j < n; j++){
        if(arr[j] < arr[minIdx]){
          minIdx = j;
        }
      }
      swap(arr[i], arr[minIdx]);
    }
}


// insertion sort
void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
      int key = arr[i];
      int j = i - 1;

      while(j >= 0 and arr[j] > key){
        arr[j+1] = arr[j];
        j--;
      }
      arr[j+1] = key;
    }
}

int main(void) {
  // for bubble sort
  int arr[] = {3, 2, 1, 7, 6};
  int n = 5;

  bubbleSort(arr, n);

  for (int n : arr) {
    cout << n << " ";
  }
  cout << endl;
  
  selectionSort(arr, n);
  
  for (int n : arr) {
    cout << n << " ";
  }
  cout << endl;
  
  insertionSort(arr, n);
  for (int n : arr) {
    cout << n << " ";
  }
  cout << endl;
  return 0;
}