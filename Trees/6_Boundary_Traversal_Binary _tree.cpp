/************************************************************
 refer on : https://takeuforward.org/data-structure/boundary-traversal-of-a-binary-tree/
 CodeStudio :https://www.codingninjas.com/codestudio/problems/boundary-traversal_790725?utm_source=youtube&utm_medium=affiliate&utm_campaign=Striver_Tree_Videos&leftPanelTab=1
#include <bits/stdc++.h> 


    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
/*
void left_Boundary(TreeNode<int>* root,vector<int> &v)
{
    if(root == NULL) return;

    if(root -> left != NULL)
    {
        v.push_back(root -> data);
        left_Boundary(root -> left,v);
    }

    else if (root -> right != NULL)
    {
        v.push_back(root -> data);
        left_Boundary(root->right,v);
    }
}

void right_Boundary(TreeNode<int>* root,vector<int> &v)
{
    if(root == NULL) return;

    if(root -> right != NULL)
    {
        right_Boundary(root -> right,v);
        v.push_back(root -> data);
    }

    else if(root ->left != NULL)
    {
        right_Boundary(root -> left , v);
        v.push_back(root -> data);
    }
}

void leaf_Boundary(TreeNode<int>* root , vector<int> &v)
{
    if(root == NULL) return;

    if(root -> left == NULL && root -> right == NULL)
    {
        v.push_back(root -> data);
    }
    else
    {
        if(root -> left != NULL)
        {
            leaf_Boundary(root -> left,v);
        }

        if(root -> right != NULL)
        {
            leaf_Boundary(root -> right,v);
        }
    }
  
}

vector<int> traverseBoundary(TreeNode<int>* root){
    vector<int> v;


    if(root->left ==NULL && root->right==NULL)
    {
        v.push_back(root->data);
        return v;
    }
    v.push_back(root->data);
    left_Boundary(root -> left, v);
    leaf_Boundary(root, v);
    right_Boundary(root -> right,v);
    return v;
}
*/