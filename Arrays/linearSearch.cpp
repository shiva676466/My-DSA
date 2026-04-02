#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2};
    int target = 9;
    bool found = false;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            cout << "Found at: " << i << endl;
            found = true;
            break;
        } 
    }
    if(!found){
        cout << "Not found\n"; 
    }
    return 0;
}

// SC : O(1)
// TC : O(n)