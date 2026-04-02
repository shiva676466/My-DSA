#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums ={1, 2, 3, 4, 5};
    int temp = nums[0];
    int n = nums.size();
    for(int i = 0; i < n; i++){
        nums[i] = nums[i+1];
    }
    nums[n - 1] = temp;

    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

// SC : O()
// TC : O()