#include <iostream>
#include <list>
using namespace std;

bool isPalindrome(list<int> head) {
    auto left = head.begin();
    auto right = head.end();
    right--;

    while(left != right && next(left) != right){
        if(*left != *right){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {

  list<int> ll = {1, 2, 3, 4, 4, 3, 2, 1};
  
  if(isPalindrome(ll)){
    cout << "Panlidrome\n";
  } else{
    cout << "Not a palindrome\n";
  }

  return 0;
}