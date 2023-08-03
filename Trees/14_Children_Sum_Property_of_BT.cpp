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

void Fun1(TreeNode* root)
{
    if(root == NULL) return;
    TreeNode* left_node = root -> left;
    TreeNode* right_node  = root -> right;

    if(left_node)
    {
        left_node -> data = root -> data;
        Fun1(left_node);
    }
    if(right_node)
    {
        right_node -> data = root -> data;
        Fun1(right_node);
    }
    if (left_node -> data + right_node -> data >= root -> data)
    {
        root -> data  =  left_node -> data + right_node ->data ;
    }
    
}
void Fun(TreeNode* root)
{
    if(root == NULL) return;
    int child = 0;

    if(root ->left)
    {
        child += root ->left -> data;
    }
    
    if(root -> right)
    {
        child += root -> right -> data;
    }
    
    if (child < root -> data)
    {
        if(root -> left) root -> left -> data = root -> data;
        else if(root -> right) root -> right -> data = root -> data;
    }

    Fun(root -> left);
    Fun(root -> right);

    int total = 0;
    if(root -> left) total +=root -> left ->data;
    if(root -> right) total += root -> right -> data;
    if(root -> left || root -> right) root -> data = total; 

}
int main()
{
    struct TreeNode *root = NewNode(40);
    root->left = NewNode(10);
    root->right = NewNode(20);
    root->left->left = NewNode(2);
    root->left->right = NewNode(5);
    // root->left->left->left = NewNode(13);
    // root->left->left->left->right = NewNode(14);
    root->right->left = NewNode(30);
    root->right->right = NewNode(40);
    // root->right->right->left = NewNode(15);
    // root->right->right->left->left = NewNode(17);

    Fun(root);
    Fun1(root); 
    
    return 0;
}