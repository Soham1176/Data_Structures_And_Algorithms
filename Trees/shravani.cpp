#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
struct TreeNode *NewNode(int data)
{
    struct TreeNode *Node = new TreeNode;
    Node->data = data;
    Node->left = Node->right = NULL;
    return (Node);
}
int main()
{
    struct TreeNode *root = NewNode(1);
    root->left = NewNode(2);
    root->right = NewNode(3);
    root->left->left = NewNode(7);
    root->left->right = NewNode(9);
    root->left->left->left = NewNode(13);
    root->left->left->left->right = NewNode(14);
    root->right->left = NewNode(10);
    root->right->right = NewNode(12);
    root->right->right->left = NewNode(15);
    root->right->right->left->left = NewNode(17);
    
    return 0;
}