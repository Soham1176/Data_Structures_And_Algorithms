/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/*
class Solution {
public:
    vector<int> v1,v2;
    void Traverse_LtoR(TreeNode* root)
    {
        if(root == NULL)
        {
            v1.push_back(-1);
            return;
        }
    
        v1.push_back(root-> val);
        Traverse_LtoR(root -> left);
        Traverse_LtoR(root -> right);
    }
    void Traverse_RtoL(TreeNode* root)
    {
        if(root == NULL)
        {
            v2.push_back(-1);
            return;
        }
    
        v2.push_back(root-> val);
        Traverse_RtoL(root -> right);
        Traverse_RtoL(root -> left);
    }
    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL) return true;
       
        Traverse_LtoR(root -> left);
        Traverse_RtoL(root -> right); 
        if(v1 == v2) return true;
        else return false;

    }
};

*/