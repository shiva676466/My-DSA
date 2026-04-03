#include<iostream>
#include<vector>
using namespace std;

bool twoSum(vector<int> &arr, int target){
    int n = arr.size();

    // check all the pairs (arr[i], arr[j])
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){

            // check if the sum of the current pair
            // equals the target
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int> arr = {1, -1, 0, 2, 3, 4, 5};
    int target = -2;

    cout << ((twoSum(arr,target))? "true" : "false");
    
    return 0;
}