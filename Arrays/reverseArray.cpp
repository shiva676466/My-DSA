#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5,8, 7, 6, 50,99};
    vector<int> reversed;
    for(int i = nums.size() - 1; i >= 0; i--){
        // here we are traversing from the last index
        reversed.push_back(nums[i]);
    }

    for(int i = 0; i < reversed.size(); i++){
        cout << reversed[i] << " ";
    }
    cout << endl;

    // BRUTE FORCE APPROACH ^
    

    // BEST APPROACH >>

    int left = 0;
    int right = nums.size()-1;
    
    while(left < right){
        swap(nums[left], nums[right]);
        left++;
        right--;
    }
    for(int num : nums){
        cout << num << ' ';
    }

    return 0;
}

// SC : O(1)
// TC : O(n)