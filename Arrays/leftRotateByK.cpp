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


// void reverseArray(vector<int>& arr, int st, int end){
    //         while(st < end){
        //             swap(arr[st], arr[end]);
        //             st++;
        //             end--;
        //         }
        //     }
        //     void rotateArr(vector<int>& arr, int d) {
            //         int n = arr.size();
            
            //         d = d%n;
            
            //         reverseArray(arr, 0, d-1);
            //         reverseArray(arr, d, n-1);
            //         reverseArray(arr, 0, n-1);
            //     }
            
// Time Complexity: O(n)
// Space Complexity: O(1)