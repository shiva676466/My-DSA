#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int count = 0, target = 9;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            count++;
        }
    }
    cout << count<< '\n';
    return 0;
}


// SC : O(1)
// TC : O(n)