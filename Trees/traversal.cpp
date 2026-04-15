#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int val) {
    data = val;
    left = right = NULL;
  }
};

Node *buildTree(vector<int> &preorder, int &idx) {
  idx++;

  if (idx >= preorder.size() || preorder[idx] == -1) {
    return NULL;
  }

  Node *root = new Node(preorder[idx]);

  root->left = buildTree(preorder, idx);
  root->right = buildTree(preorder, idx);

  return root;
}

int main(void) {
  int preorder = {} return 0;
}