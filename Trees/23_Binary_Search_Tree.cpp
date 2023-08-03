//  Refer on: https://www.youtube.com/watch?v=KcNt6v_56cc&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=42&ab_channel=takeUforward
// leetcode question :https://leetcode.com/problems/search-in-a-binary-search-tree/description/
/*
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root != NULL && root -> val != val)
        {
            root = val < root -> val ? root -> left : root -> right ;
        }
        return root;
    }
};
*/
