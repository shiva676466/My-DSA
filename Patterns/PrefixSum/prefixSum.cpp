#include<iostream>
#include<vector>
using namespace std;

// Build the prefix array using the n + 1 technique.
// the given array is: [2, 5, 1, 8, 3]

int main(){

    vector<int> nums = {2, 5, 1, 8, 3};
    int n = nums.size();
    vector<int> prefixSum(n + 1, 0);

    prefixSum[0] = nums[0];
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i] + nums[i];
    }

    return 0;
}