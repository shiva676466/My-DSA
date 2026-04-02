#include<iostream>
// #include<vector>
using namespace std;


#define N 10
int stk[N];
int top = -1;

void push(int n){                         // push fn
    if(top == N - 1){
        cout << "Stack overflow" << endl;
        return;
    }   
    top += 1;  // move top
    stk[top] = n; // inserting element..........
}

void pop(){                                // pop fn
    if(top == -1){
        cout << "Stack underflow \n";
        return;
    }
    cout << "Popped element " << stk[top] << '\n';
    cout << endl;
    top -= 1;
}

int peek(){                                // peek fn
    if(top == -1){
        cout <<"Stack is empty no elements are there in top.\n";
        return -1;
    }
    return stk[top];
}


void display(){                      // display fn

    if(top == -1){
        cout << "Stack is empty\n";
        return;
    }

    for(int i = 0; i <= top; i++){
        cout << stk[i] << " ";
    }
    cout << endl;
}

bool isEmpty(){
    return top == -1;
}

int main(){

   

    int choice, value;

    while(true){

        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Check for empty\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice){

            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                cout << "Top element: " << peek() << endl;
                break;

            case 4:
                display();
                break;
                
                case 5:
                if(isEmpty()){
                    cout << "Yes\n";
                }   else cout << "No\n";
                break;

                case 6:
                    cout << "Exiting...\n";
                    return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;

}