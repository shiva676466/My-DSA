#include<iostream>
#include<vector>
using namespace std;

// binary search always requires sorted array to perform operations

int BS(vector<int> arr, int target, int st, int end){
    if(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            return BS(arr, target, mid+1, end);
        else
            return BS(arr, target, st, mid-1);
    }

    return -1;
}

int search(vector<int> &arr, int target){
    return BS(arr, target, 0, arr.size() - 1);
}


int main(){
    vector<int> arr = {1, 2, 2, 3, 4,5, 6, 44};
    int target = 4;
    cout << search(arr, target);
    return 0;
}