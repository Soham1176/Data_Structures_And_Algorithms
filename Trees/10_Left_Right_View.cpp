/**
 * Link to code : 
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
    vector<int> v;
    void RightView(TreeNode* root,int lvl)
    {
        if(root == NULL) return;

        if(lvl ==v.size())
        {
            v.push_back(root -> val);
        }

        if(root -> right != NULL)
            RightView(root -> right,lvl+1);

        if(root -> left != NULL)
            RightView(root -> left,lvl+1);

    }
    vector<int> rightSideView(TreeNode* root) {

        if(root == NULL) return v;

        RightView(root,0);

        return v;

    }
};

*/