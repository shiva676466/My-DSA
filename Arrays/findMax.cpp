#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 3, 5 ,9, 90, 8};
    int largest = nums[0];
    for(int i = 1; i < nums.size(); i++){   

// we are starting from one since already largest element is assumed as the first element

        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout << largest << '\n';
    return 0;
}

// SC : O(1)
// TC : O(n)