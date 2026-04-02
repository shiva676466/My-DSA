#include<iostream>
#include<string>
#include<stack>
using namespace std;


stack<char> str;

string reverseStr(string name){
    
    stack<char> s;
    
    for(int i = 0; i < name.length(); i++){
        s.push(name[i]);
    }
    
    string reversed = "";
    
    while(!s.empty()){
        reversed += s.top();
        s.pop();
    }
    return reversed;
}


int main(){
    
    string name = "ShivaGanesh";

    cout << reverseStr(name) << endl;


    return 0;
}


// TC = SC = O(n)