#include<iostream>
#include<algorithm>
#include <utility>
using namespace std;

void reverse_a_str(string &str, int st, int end){
    // base case
    if(st >= end){
        return ;
    }
    // swap
    swap(str[st], str[end]);

    // recursive case
    reverse_a_str(str, st+1, end-1);
    // this will makes "st" & "end" moves inward so that swapping happens easily
}


int main(void){
    string s = "MOM";
    reverse_a_str(s, 0, s.length()-1);
    cout << s;
    return 0;
}