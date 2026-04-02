/* 
Recursion is when a function calls itself to solve a smaller version of the same problem.

Instead of solving the whole problem at once, it says: 
    I will solve a smaller piece, and assume the rest works.

REAL_LIFE EXAMPLE : 
    To reach step 5 from bottom, we must: 
    - first reach step 4
    - to reach step 4, we must reach step 3
    - to reach step 3, we must reach step 2
    - Until we reach the step 1

    That repeated dependency is recursion thinking.

Recursion have 2 most imp parts : 
    1.BASE CASE (Stopping Condition) : 
        - this tells recursion function when to stop.
        - without it -> infinite calls -> stack overflow.
    2.RECURSIVE CASE : 
        - this is where the function calls itself with a smaller input or smaller version of the function.

Whenever solving a recurison problem : 
    - identify the smallest input(smallest input)
    ex: if(n == 0)
            return 0;
    - reduce the problem
    ex: n -> n -1
    - trust the recursive call
    ex: sum(n - 1)

VISUALS : 
    1. fn calls stack up
    - think of each fn call as a box placed on top of another box : 
                        print(3)
                        ↓
                        print(2)
                        ↓
                        print(1)
                        ↓
                        print(0)
    - visually as a stack : 
                    | print(0) |   ← top (base case)
                    | print(1) |
                    | print(2) |
                    | print(3) |   ← bottom     
                    
    - when print(0) runs: 
        - it hits the base case
        - returns immediately
    2. stack starts unwinding (coming back) : 
    - now it goes backwards : 
                print(1) → prints 1
                print(2) → prints 2
                print(3) → prints 3
    - final output : 
        1 2 3
    - important visualisation : 
        code after recursive call runs while coming back up.
        => print(n - 1)
        => cout << n;
    - thats why all the numbers are printing in ascending order.
 */

 #include<iostream>
 using namespace std;

 void print(int n){
    // BASE CASE
    if(n == 0){
        return;
    }
    print(n-1);
    cout << n << " ";
 }

 int main(){
    print(5);
    return 0;
 }
