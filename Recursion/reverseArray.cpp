#include<iostream>
using namespace std;


void reverseArray(int arr[], int st, int end){
    // base-case
    if(st >= end){
        return;
    }

    // swapping 
    int temp = arr[st];
    arr[st] = arr[end];
    arr[end] = temp;

    // recursive call
    reverseArray(arr, st+1, end-1);
}

int main(){

    int arr[] = {1, 2, 3, 4, 5,6};
    int n = 6;

    reverseArray(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}