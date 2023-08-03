// Refer on :https://takeuforward.org/data-structure/morris-inorder-traversal-of-a-binary-tree/22
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
vector<int> inorderTraversal(TreeNode* root)
{
    vector<int> inorder;
    TreeNode* cur = root;
    while (cur != NULL)
    {
        if(cur -> left == NULL)
        {
            inorder.push_back(cur -> data);
            cur = cur -> right;
        }
        else
        {
            TreeNode* prev = cur -> left;
            while(prev -> right && prev -> right != cur)
            {
                prev = prev -> right;
            }
            if(prev -> right == NULL)
            {
                prev -> right = cur;
                cur = cur -> left;
            }
            else
            {
                prev -> right = NULL;
                inorder.push_back(cur ->data);
                cur = cur -> right;
            }
        }

    }
    return inorder;
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