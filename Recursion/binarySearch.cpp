#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr, int target, int st, int end){
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] < target){
            return BinarySearch(arr, target, mid+1, end);
        } else{
            return BinarySearch(arr, target, st, mid-1);
        }
    }
    return -1;
}


int main(void){

    vector<int> arr = {0, -2, 3, 1, 4, 5, 6, 7, 8};
    int target = -1;

    cout << BinarySearch(arr,target,0, arr.size()-1);

    return 0;
}