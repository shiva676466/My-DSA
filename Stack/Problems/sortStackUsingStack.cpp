#include<stack>
#include<iostream>
using namespace std;

stack<int> SortStack(stack<int> &st){
     stack<int> temp;

     while(!st.empty()){
        int current = st.top();
        st.pop();

        while(!temp.empty() && temp.top() < current){
            st.push(temp.top());
            temp.pop();
        }
        temp.push(current);
     }

     return temp;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(99);
    st.push(0);
    st.push(60);
    st.push(40);

    stack<int> sorted = SortStack(st);

    while(!sorted.empty()){
        cout << sorted.top() << " ";
        sorted.pop();
    }

    return 0;
}