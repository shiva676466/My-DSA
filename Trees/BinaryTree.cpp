#include<iostream>
#include<vector>
using namespace std;


class Node{
public:
    int data;
    Node* left;
    Node* right;

    // constructor for intialising variables everytime after creating an obj
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){    // base case
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);   // for left
    root->right = buildTree(preorder);   // for right

    return root;
}


int main(){

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    cout << root->data << "\n";

    return 0;
}