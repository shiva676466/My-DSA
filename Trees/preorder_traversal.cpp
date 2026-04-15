#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  // constructor for intialising variables everytime after creating an obj
  Node(int val) {
    data = val;
    left = right = NULL;
  }
};

Node *buildTree(vector<int>& preorder, int &idx) {
  idx++;

  if (idx >= preorder.size() || preorder[idx] == -1) { // base case
    return NULL;
  }

  Node *root = new Node(preorder[idx]);
  root->left = buildTree(preorder, idx);  // for left
  root->right = buildTree(preorder, idx); // for right

  return root;
}

void preOrderTraversal(Node* root){
  if(root == NULL){
	return;
  }

  cout << root->data << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

int main() {

  vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, 5, -1, -1};
  int idx = -1;
  Node *root = buildTree(preorder, idx);

  preOrderTraversal(root);
  cout << endl;

  return 0;
}

