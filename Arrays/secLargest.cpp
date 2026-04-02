#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int largest = INT_MIN, secLargest = INT_MIN;

    for(int num : nums){
        if(num >largest){
            secLargest = largest;
            largest = num;
        } else if(num > secLargest && num != largest){
            secLargest = num;
        }
    }

    cout << "Second Largest: " << secLargest << endl;
    return 0;
}