/*
leetcode Questio : https://leetcode.com/problems/diameter-of-binary-tree/description/
refernce for :https://takeuforward.org/data-structure/calculate-the-diameter-of-a-binary-tree/
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        find_max(root,maxi);
        return maxi;
    }

    int find_max(TreeNode* root,int &maxi)
    {
        if(root == NULL) return 0;

        int lh = find_max(root -> left,maxi);
        int rh = find_max(root -> right,maxi);

        maxi = max(maxi,(lh+rh));

        return (1+max(lh,rh));
    }
};

*/