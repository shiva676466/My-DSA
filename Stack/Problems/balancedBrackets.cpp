#include<iostream>
#include<string>
using namespace std;

class Stack{
    char arr[100];
    int top = -1;
public:
    Stack(){
        top = -1;
    }

    void push(char val){
        if(top == 99){
            cout << "Overflow\n";
            return;
        }
        arr[++top] = val;
    }

    void pop(){
        if(top == -1){
            cout << "Underflow\n";
            return;
        }
        top --;
    }

    char peek(){
        if(top == -1){
            cout << "Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top == -1;
    }

    void display(){
        for(int i = top; i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool isBalanced(string brackets){
        Stack s;

        for(int i = 0; i < brackets.length(); i++){
            char ch = brackets[i];

            // opening brackets
            if(ch == '(' || ch == '{' || ch == '['){
                s.push(ch);
            }
            // closing brackets
            else if(ch == ')' || ch == '}' || ch == ']'){
                if(s.isEmpty()){
                    return false;
                }

                char top = s.peek();

                if((ch == ')' && top == '(') ||
                   (ch == '}' && top == '{') ||
                   (ch == ']' && top == '[')){
                    s.pop();
                } else {
                    return false;
                }
            }
        }

        return s.isEmpty();
    }
};


int main(){

    string brackets = "({[])";

    Stack s;

    cout << s.isBalanced(brackets) << endl;
    
    
    return 0;
}