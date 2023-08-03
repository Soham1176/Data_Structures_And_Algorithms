/*
refer on :https://www.youtube.com/watch?v=9TJYWh0adfk&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&ab_channel=takeUforward
leetcode :https://leetcode.com/problems/kth-smallest-element-in-a-bst/
class Solution {
public:

    TreeNode* solve(TreeNode* root,int &k)
    {
        if(root == NULL) return NULL;
        
        // L
        TreeNode* left = solve(root -> left,k);
        if(left != NULL) return left;

        // Root
        k--;
        if(k == 0) return root;

        //Right

        return solve(root -> right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        int ans;
        ans = solve(root,k) -> val;
        return ans;
    }
}
*/