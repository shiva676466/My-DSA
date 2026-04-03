#include<iostream>
#include<list>
using namespace std;

// common STL functions for linked lists
// push_back()
// push_front()
// pop_back()
// pop_front()
// ll.front()
// ll.back()
// ll.size()

list<int> Reverse_ll(list<int> head){
    if(head.empty() || head.size() == 1){
        return head;
    }

    int first = head.front();
    head.pop_front();

    list<int> reversed = Reverse_ll(head);

    reversed.push_back(first);

    return reversed;
}


int main(void){
    list<int> ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    list<int> reversed = Reverse_ll(ll);

    for(int x : reversed){
        cout << x << "->";
    }
    cout << "NULL" << endl;

    return 0;
}