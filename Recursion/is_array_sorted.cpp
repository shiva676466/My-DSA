#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
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