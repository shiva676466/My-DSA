#include<iostream>
#include <utility>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8,9, 0, 0, 9, 0, 9, 8, 7,6, 0,0,0,8, 7, };
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}

// SC : O(1)
// TC : O(n)