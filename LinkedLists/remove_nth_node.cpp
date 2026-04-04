#include<iostream>
using namespace std;

struct Node {

    int data;
    struct Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};


