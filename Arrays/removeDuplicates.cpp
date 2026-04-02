#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 3, 4, 5, 5, 5, 6, 7, 8, 9};

    if (nums.empty()) return 0;

    int i = 0;  // pointer for last unique element
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    cout << "Array after removing duplicates: ";
    for (int k = 0; k <= i; k++) {
        cout << nums[k] << " ";
    }

    cout << endl;
    return 0;
}

// SC : O(1)
// TC : O(n)