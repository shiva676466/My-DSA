#include<iostream>
using namespace std;


int linearSearch(int arr[], int target, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
        else {
            return -1;
        }
    }
}

int main(void){



    return 0;
}