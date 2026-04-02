#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, };
    int k = 2, n = nums.size();
    vector<int> rotatedArr(n);
    for(int i = 0; i < n; i++){
        rotatedArr[i] = nums[(i + k) % n];
    }

    for(int num : rotatedArr){
        cout << num << " ";
    }
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)