#include<iostream>
#include<stack>
using namespace std;


/* 
stack in STL have :
    - push()  - insert element
    - pop()   - remove the top most element
    - top()   - access the top most element
    - empty() - check for emptyness (return 0 if empty; 1 if having elements)
    - size()  - no of elements in the stack

    it doesnt have display function
 */


 void display(stack<int> shiva){
    while(!shiva.empty()){
        cout << shiva.top()<< " ";
        shiva.pop();
    }
    cout << endl;
 }

int main(){
    stack<int> shiva;
    shiva.push(9);
    shiva.push(8);
    shiva.push(7);
    shiva.push(6);
    shiva.push(5);
    shiva.push(4);
    shiva.push(3);
    shiva.push(2);
    shiva.push(1);
    shiva.push(0);
    
    shiva.pop();

    cout << shiva.empty() << endl;
    cout << shiva.size() << endl;

    display(shiva);

    cout << "Top element: " << shiva.top()<< endl;

    return 0;
}