/*
leetcode Questio : https://leetcode.com/problems/binary-tree-maximum-path-sum/description/
refernce for :https://takeuforward.org/data-structure/maximum-sum-path-in-binary-tree/
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathDownSum(root,maxi);
        return maxi;
    }

    int maxPathDownSum(TreeNode* root,int &maxi)
    {
        if(root == NULL) return 0;

        int leftsum = max(0,maxPathDownSum(root -> left , maxi)) ;
        int rightsum = max(0,maxPathDownSum(root -> right,maxi));

        maxi  = max(maxi,leftsum + rightsum + root-> val);
        
        return root->val+max(leftsum,rightsum);
    }
};
*/

