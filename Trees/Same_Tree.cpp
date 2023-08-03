/*
Leetcode :https://leetcode.com/problems/same-tree/submissions/893218274/
refer on :https://takeuforward.org/data-structure/check-if-two-trees-are-identical/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p== NULL || q ==NULL) return(p==q);
        
        return (p -> val == q -> val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right); 

    }
};
*/