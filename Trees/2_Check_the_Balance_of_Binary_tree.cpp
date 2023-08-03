/**
 * Link of Code: https://leetcode.com/problems/balanced-binary-tree/
 * refer on : https://www.youtube.com/watch?v=Yt50Jfbd8Po&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=16&t=672s&ab_channel=takeUforward
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

    int height(TreeNode* root)
    {
        if(root == NULL)
            return 0;

        int lh = height(root -> left);
        int rh = height(root -> right);
        if(lh==-1 || rh==-1) return -1;
        if(abs(lh - rh) > 1) return -1;

        return(1+max(lh,rh));
    }

    bool isBalanced(TreeNode* root) { 

        if(root == NULL)
            return true;

        if(height(root) != -1) return true;
        return false; 
    }
};

*/
