#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8,9,};

    bool isSorted = true;
    for(int i = 0; i < nums.size() - 1; i++){
       if(nums[i] > nums[i+1]){
            isSorted = false;
            break;
       }
    }
    if(isSorted){
        cout << "Sorted\n";
    } else {
        cout << "Not sorted\n";
    }
    return 0;
}

// SC : O(1)
// TC : O(n)