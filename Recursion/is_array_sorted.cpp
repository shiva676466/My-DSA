#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1){
        return true;
        // base case for one element and zero elements
        // also we cant do 'arr[n-2]' if we have only one element or zero elements in the array.
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);

    // 'arr[n-1] >= arr[n-2]' - checking that is the last element is sorted than its previous one or not
    // if not then we will not require to perform 'isSorted(arr, n-1)' as extra work.
}


int main(){

    vector<int> arr1 = {1, 2, 3, 4};
    cout << isSorted(arr1, arr1.size());
    
    cout << endl;
    cout << endl;

    vector<int> arr2 = {1, 2, 3, 4, 7, 0, -1};
    cout << isSorted(arr2, arr2.size());

    return 0;
}